import argparse
import json
import pathlib
import statistics
from collections import defaultdict

from mako.template import Template

KEY = "mips"
TOLERANCE = 0.1
MAX_HISTORY = 10
REPO_URL = "https://github.com/wysiwyng/etiss/tree"


WIKI_TEMPLATE = '''# Performance statistics for commit ${current_hash}
JIT Engine | Status | Current MIPS | Best MIPS | at commit
---|---|---|---|---
% for engine, stats in statss.items():
${engine} | ${messages[engine]} | ${stats["mips"][-1][0]} | ${stats["best_mips"]} | ${stats["best_hash"]}
% endfor
'''

def main(input_files, stats_file, wiki_md, current_hash):
    def init_engine(init_value):
        return {
                f"{KEY}": [],
                f"best_{KEY}": init_value,
                f"best_hash": current_hash,
                f"regressed_hash": None
            }

    runs = defaultdict(list)

    for in_file in input_files:
        in_path = pathlib.Path(in_file)
        in_name = in_path.stem

        split_name = in_name.split("_")

        if len(split_name) == 1:
            engine = "default"
            run_no = 1
        elif len(split_name) == 2:
            engine = split_name[1]
            run_no = 1
        elif len(split_name) == 3:
            engine = split_name[1]
            run_no = int(split_name[2])

        with open(in_file, "r") as in_fp:
            in_dict = json.load(in_fp)

        runs[engine].append(in_dict[KEY])

    runs_avg = {key: statistics.mean(value) for key, value in runs.items()}

    messages = {}
    stats = {}

    if not pathlib.Path(stats_file).exists():
        stats = {}
        for engine, value in runs_avg.items():
            stats[engine] = init_engine(value)
    else:
        with open(stats_file, "r") as fp:
            stats = json.load(fp)

    for engine, value in runs_avg.items():
        if engine not in stats:
            stats[engine] = init_engine(value)
        else:
            stats[engine][f"{KEY}"].append((value, current_hash))
            stats[engine][f"{KEY}"] = stats[engine][f"{KEY}"][-MAX_HISTORY:]

            best = stats[engine][f"best_{KEY}"]
            diff = value / best - 1

            if value > best:
                stats[engine][f"best_{KEY}"] = value
                stats[engine][f"best_hash"] = current_hash
                messages[engine] = "new best"
            elif diff < -TOLERANCE:
                if stats[engine]["regressed_hash"] is None:
                    messages[engine] = "regression introduced"
                    stats[engine]["regressed_hash"] = current_hash
                else:
                    messages[engine] = f"regressed since commit {stats[engine]['regressed_hash']}"
            else:
                if stats[engine]["regressed_hash"] is not None:
                    messages[engine] = "regression cleared"
                else:
                    messages[engine] = "no change"
                stats[engine]["regressed_hash"] = None

    with open(stats_file, "w") as fp:
        json.dump(stats, fp, indent=4)

    print(messages)

    t = Template(WIKI_TEMPLATE)
    s = t.render(messages=messages, statss=stats, current_hash=current_hash)
    with open(wiki_md, "w") as ofile:
        ofile.write(s)

if __name__ == "__main__":
    p = argparse.ArgumentParser()

    # input file names should have the format stats_<engine>_<run_no>.json

    p.add_argument("input_files", nargs="+")
    p.add_argument("stats_file")
    p.add_argument("wiki_md")
    p.add_argument("current_hash")

    p_args = p.parse_args()

    main(p_args.input_files, p_args.stats_file, p_args.wiki_md, p_args.current_hash)
