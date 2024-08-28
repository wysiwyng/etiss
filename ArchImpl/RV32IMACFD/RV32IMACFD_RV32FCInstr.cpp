/**
 * Generated on Tue, 30 Apr 2024 14:18:29 +0200.
 *
 * This file contains the instruction behavior models of the RV32FC
 * instruction set for the RV32IMACFD core architecture.
 */

#include "RV32IMACFDArch.h"
#include "RV32IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// CFLW ------------------------------------------------------------------------
static InstructionDefinition cflw_rd_uimm_rs1 (
	ISA16_RV32IMACFD,
	"cflw",
	(uint16_t) 0x6000,
	(uint16_t) 0xe003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(4, 2);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_6(5, 5);
uimm += R_uimm_6.read(ba) << 6;
static BitArrayRange R_uimm_2(6, 6);
uimm += R_uimm_2.read(ba) << 2;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_uimm_3(12, 10);
uimm += R_uimm_3.read(ba) << 3;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CFLW\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 114);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1191);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1190, 1186, 1189, 1187, 1188);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4984);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 offs = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL] + " + std::to_string(uimm) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 4949, 4948, 4946, 4945, 4943, 4944, 4947);\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, offs, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 res = (etiss_uint32)(mem_val_0);\n";
cp.code() += "etiss_coverage_count(4, 4956, 4955, 4953, 4952);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4983);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFD*)cpu)->F[" + std::to_string(rd + 8ULL) + "ULL] = -4294967296LL | res;\n";
cp.code() += "etiss_coverage_count(7, 4982, 4972, 4971, 4969, 4970, 4981, 4980);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CFLW\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending || cpu->exception) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(4, 2);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_6(5, 5);
uimm += R_uimm_6.read(ba) << 6;
static BitArrayRange R_uimm_2(6, 6);
uimm += R_uimm_2.read(ba) << 2;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_uimm_3(12, 10);
uimm += R_uimm_3.read(ba) << 3;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cflw" << " # " << ba << (" [rd=" + std::to_string(rd) + " | uimm=" + std::to_string(uimm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CFSW ------------------------------------------------------------------------
static InstructionDefinition cfsw_rs2_uimm_rs1 (
	ISA16_RV32IMACFD,
	"cfsw",
	(uint16_t) 0xe000,
	(uint16_t) 0xe003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(4, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_6(5, 5);
uimm += R_uimm_6.read(ba) << 6;
static BitArrayRange R_uimm_2(6, 6);
uimm += R_uimm_2.read(ba) << 2;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_uimm_3(12, 10);
uimm += R_uimm_3.read(ba) << 3;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CFSW\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 115);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1191);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1190, 1186, 1189, 1187, 1188);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 5005);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 offs = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL] + " + std::to_string(uimm) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 4993, 4992, 4990, 4989, 4987, 4988, 4991);\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_uint32)(((RV32IMACFD*)cpu)->F[" + std::to_string(rs2 + 8ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(8, 5004, 4996, 4995, 5003, 5001, 5000, 4998, 4999);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, offs, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CFSW\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending || cpu->exception) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(4, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_6(5, 5);
uimm += R_uimm_6.read(ba) << 6;
static BitArrayRange R_uimm_2(6, 6);
uimm += R_uimm_2.read(ba) << 2;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_uimm_3(12, 10);
uimm += R_uimm_3.read(ba) << 3;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cfsw" << " # " << ba << (" [rs2=" + std::to_string(rs2) + " | uimm=" + std::to_string(uimm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CFLWSP ----------------------------------------------------------------------
static InstructionDefinition cflwsp_uimm_rd (
	ISA16_RV32IMACFD,
	"cflwsp",
	(uint16_t) 0x6002,
	(uint16_t) 0xe003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_6(3, 2);
uimm += R_uimm_6.read(ba) << 6;
static BitArrayRange R_uimm_2(6, 4);
uimm += R_uimm_2.read(ba) << 2;
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
static BitArrayRange R_uimm_5(12, 12);
uimm += R_uimm_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CFLWSP\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 116);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1191);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1190, 1186, 1189, 1187, 1188);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 5043);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 offs = *((RV32IMACFD*)cpu)->X[2ULL] + " + std::to_string(uimm) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 5012, 5011, 5009, 5008, 5010);\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, offs, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 res = (etiss_uint32)(mem_val_0);\n";
cp.code() += "etiss_coverage_count(4, 5019, 5018, 5016, 5015);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 5042);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | res;\n";
cp.code() += "etiss_coverage_count(5, 5041, 5031, 5030, 5040, 5039);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CFLWSP\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending || cpu->exception) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_6(3, 2);
uimm += R_uimm_6.read(ba) << 6;
static BitArrayRange R_uimm_2(6, 4);
uimm += R_uimm_2.read(ba) << 2;
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
static BitArrayRange R_uimm_5(12, 12);
uimm += R_uimm_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cflwsp" << " # " << ba << (" [uimm=" + std::to_string(uimm) + " | rd=" + std::to_string(rd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CFSWSP ----------------------------------------------------------------------
static InstructionDefinition cfswsp_rs2_uimm (
	ISA16_RV32IMACFD,
	"cfswsp",
	(uint16_t) 0xe002,
	(uint16_t) 0xe003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(6, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_6(8, 7);
uimm += R_uimm_6.read(ba) << 6;
static BitArrayRange R_uimm_2(12, 9);
uimm += R_uimm_2.read(ba) << 2;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CFSWSP\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 117);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1191);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1190, 1186, 1189, 1187, 1188);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 5060);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 offs = *((RV32IMACFD*)cpu)->X[2ULL] + " + std::to_string(uimm) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 5050, 5049, 5047, 5046, 5048);\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_uint32)(((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(6, 5059, 5053, 5052, 5058, 5056, 5055);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, offs, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CFSWSP\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending || cpu->exception) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(6, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_6(8, 7);
uimm += R_uimm_6.read(ba) << 6;
static BitArrayRange R_uimm_2(12, 9);
uimm += R_uimm_2.read(ba) << 2;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cfswsp" << " # " << ba << (" [rs2=" + std::to_string(rs2) + " | uimm=" + std::to_string(uimm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
