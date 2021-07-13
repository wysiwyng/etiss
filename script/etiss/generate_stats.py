import json
import random
import pathlib
import sys

RUNS = 5
ENGINES = ["tcc", "llvm", "gcc"]

BASE_VALUES = {
    "cpu_time": 0.8303822813,
    "sim_time": 4.558939,
    "cpu_cycles": 26572233,
    "mips": float(sys.argv[1])
}

VARIATION = 0.1

for eng in ENGINES:
    for run in range(RUNS):
        var = random.random() * VARIATION * 2 - VARIATION + 1
        #var = (random.random() - VARIATION) * VARIATION * 2 + 1
        values = {key: value * var for key, value in BASE_VALUES.items()}
        fpath = pathlib.Path(f"stats_{eng}_{run}.json").resolve()
        with open(fpath, "w") as fp:
            print(fpath)
            json.dump(values, fp)