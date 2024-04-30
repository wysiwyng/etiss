/**
 * Generated on Tue, 30 Apr 2024 14:18:29 +0200.
 *
 * This file contains the instruction behavior models of the RV32M
 * instruction set for the RV32IMACFD core architecture.
 */

#include "RV32IMACFDArch.h"
#include "RV32IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// MUL -------------------------------------------------------------------------
static InstructionDefinition mul_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"mul",
	(uint32_t) 0x2000033,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//MUL\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 72);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1191);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1190, 1186, 1189, 1187, 1188);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2879);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 2843);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 2849, 2846, 2844, 2847, 2848);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 2878);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_int64 res = (etiss_int64)((etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL])) * (etiss_int64)((etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]));\n";
cp.code() += "etiss_coverage_count(12, 2868, 2867, 2858, 2856, 2855, 2854, 2852, 2866, 2864, 2863, 2862, 2860);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)(res);\n";
cp.code() += "etiss_coverage_count(6, 2877, 2873, 2872, 2870, 2876, 2874);\n";
cp.code() += "} // block\n";
} // block
} // conditional
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "mul" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// MULH ------------------------------------------------------------------------
static InstructionDefinition mulh_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"mulh",
	(uint32_t) 0x2001033,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//MULH\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 73);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1191);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1190, 1186, 1189, 1187, 1188);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2919);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 2880);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 2886, 2883, 2881, 2884, 2885);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 2918);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_int64 res = (etiss_int64)((etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL])) * (etiss_int64)((etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]));\n";
cp.code() += "etiss_coverage_count(12, 2905, 2904, 2895, 2893, 2892, 2891, 2889, 2903, 2901, 2900, 2899, 2897);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)((res >> 32ULL));\n";
cp.code() += "etiss_coverage_count(8, 2917, 2910, 2909, 2907, 2916, 2913, 2911, 2914);\n";
cp.code() += "} // block\n";
} // block
} // conditional
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "mulh" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// MULHSU ----------------------------------------------------------------------
static InstructionDefinition mulhsu_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"mulhsu",
	(uint32_t) 0x2002033,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//MULHSU\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 74);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1191);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1190, 1186, 1189, 1187, 1188);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2958);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 2920);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 2926, 2923, 2921, 2924, 2925);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 2957);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_int64 res = (etiss_int64)((etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL])) * (etiss_uint64)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(11, 2944, 2943, 2935, 2933, 2932, 2931, 2929, 2942, 2940, 2939, 2937);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)((res >> 32ULL));\n";
cp.code() += "etiss_coverage_count(8, 2956, 2949, 2948, 2946, 2955, 2952, 2950, 2953);\n";
cp.code() += "} // block\n";
} // block
} // conditional
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "mulhsu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// MULHU -----------------------------------------------------------------------
static InstructionDefinition mulhu_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"mulhu",
	(uint32_t) 0x2003033,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//MULHU\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 75);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1191);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1190, 1186, 1189, 1187, 1188);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2996);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 2959);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 2965, 2962, 2960, 2963, 2964);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 2995);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint64 res = (etiss_uint64)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]) * (etiss_uint64)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(10, 2982, 2981, 2973, 2971, 2970, 2968, 2980, 2978, 2977, 2975);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)((res >> 32ULL));\n";
cp.code() += "etiss_coverage_count(8, 2994, 2987, 2986, 2984, 2993, 2990, 2988, 2991);\n";
cp.code() += "} // block\n";
} // block
} // conditional
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "mulhu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// DIV -------------------------------------------------------------------------
static InstructionDefinition div_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"div",
	(uint32_t) 0x2004033,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//DIV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 76);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1191);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1190, 1186, 1189, 1187, 1188);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3077);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 2997);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3003, 3000, 2998, 3001, 3002);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3076);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3004);\n";
cp.code() += "if (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL] != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(5, 3011, 3009, 3008, 3006, 3010);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3067);\n";
cp.code() += "{ // block\n";
etiss_uint32 MMIN = 2147483648ULL;
cp.code() += "etiss_coverage_count(1, 3019);\n";
cp.code() += "etiss_coverage_count(1, 3020);\n";
cp.code() += "if (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] == " + std::to_string(MMIN) + "ULL && (etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]) == -1LL) { // conditional\n";
cp.code() += "etiss_coverage_count(11, 3038, 3027, 3025, 3024, 3022, 3026, 3037, 3034, 3032, 3031, 3029);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = " + std::to_string(MMIN) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 3045, 3043, 3042, 3040, 3044);\n";
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]) / (etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(13, 3066, 3050, 3049, 3047, 3065, 3057, 3055, 3054, 3052, 3064, 3062, 3061, 3059);\n";
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = -1LL;\n";
cp.code() += "etiss_coverage_count(4, 3075, 3072, 3071, 3069);\n";
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
} // conditional
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "div" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// DIVU ------------------------------------------------------------------------
static InstructionDefinition divu_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"divu",
	(uint32_t) 0x2005033,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//DIVU\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 77);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1191);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1190, 1186, 1189, 1187, 1188);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3119);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3078);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3084, 3081, 3079, 3082, 3083);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3118);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3085);\n";
cp.code() += "if (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL] != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(5, 3092, 3090, 3089, 3087, 3091);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] / *((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(11, 3109, 3097, 3096, 3094, 3108, 3102, 3101, 3099, 3107, 3106, 3104);\n";
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = -1LL;\n";
cp.code() += "etiss_coverage_count(4, 3117, 3114, 3113, 3111);\n";
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
} // conditional
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "divu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// REM -------------------------------------------------------------------------
static InstructionDefinition rem_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"rem",
	(uint32_t) 0x2006033,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//REM\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 78);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1191);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1190, 1186, 1189, 1187, 1188);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3203);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3120);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3126, 3123, 3121, 3124, 3125);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3202);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3127);\n";
cp.code() += "if (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL] != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(5, 3134, 3132, 3131, 3129, 3133);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3190);\n";
cp.code() += "{ // block\n";
etiss_uint32 MMIN = 2147483648ULL;
cp.code() += "etiss_coverage_count(1, 3142);\n";
cp.code() += "etiss_coverage_count(1, 3143);\n";
cp.code() += "if (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] == " + std::to_string(MMIN) + "ULL && (etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]) == -1LL) { // conditional\n";
cp.code() += "etiss_coverage_count(11, 3161, 3150, 3148, 3147, 3145, 3149, 3160, 3157, 3155, 3154, 3152);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(5, 3168, 3166, 3165, 3163, 3167);\n";
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]) % (etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(13, 3189, 3173, 3172, 3170, 3188, 3180, 3178, 3177, 3175, 3187, 3185, 3184, 3182);\n";
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(7, 3201, 3195, 3194, 3192, 3200, 3199, 3197);\n";
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
} // conditional
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "rem" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// REMU ------------------------------------------------------------------------
static InstructionDefinition remu_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"remu",
	(uint32_t) 0x2007033,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//REMU\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 79);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1191);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1190, 1186, 1189, 1187, 1188);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3248);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3204);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3210, 3207, 3205, 3208, 3209);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3247);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3211);\n";
cp.code() += "if (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL] != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(5, 3218, 3216, 3215, 3213, 3217);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] % *((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(11, 3235, 3223, 3222, 3220, 3234, 3228, 3227, 3225, 3233, 3232, 3230);\n";
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(7, 3246, 3240, 3239, 3237, 3245, 3244, 3242);\n";
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
} // conditional
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "remu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
