/**
 * Generated on Thu, 26 Jan 2023 18:44:34 +0100.
 *
 * This file contains the instruction behavior models of the RV64M
 * instruction set for the RV64IMACFD core architecture.
 */

#include "RV64IMACFDArch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV64IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// MULW ------------------------------------------------------------------------
static InstructionDefinition mulw_rd_rs1_rs2 (
	ISA32_RV64IMACFD,
	"mulw",
	(uint32_t) 0x200003b,
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

		cp.code() = std::string("//MULW\n");

// -----------------------------------------------------------------------------
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4UL) + "U;\n";
if ((rd % 32U) != 0U) {
cp.code() += "*((RV64IMACFD*)cpu)->X[" + std::to_string(rd % 32U) + "U] = (etiss_uint64)((etiss_int32)(((etiss_int32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs1 % 32U) + "U]) * (etiss_int32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs2 % 32U) + "U]))));\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32U], 64);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32U], 64);
		cp.getAffectedRegisters().add(reg_name[rd % 32U], 64);
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
ss << "mulw" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// DIVW ------------------------------------------------------------------------
static InstructionDefinition divw_rd_rs1_rs2 (
	ISA32_RV64IMACFD,
	"divw",
	(uint32_t) 0x200403b,
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

		cp.code() = std::string("//DIVW\n");

// -----------------------------------------------------------------------------
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4UL) + "U;\n";
if ((rd % 32U) != 0U) {
cp.code() += "if (*((RV64IMACFD*)cpu)->X[" + std::to_string(rs2 % 32U) + "U] != 0UL) {\n";
etiss_int32 MMIN = 2147483648U;
cp.code() += "if ((etiss_int32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs1 % 32U) + "U]) == " + std::to_string(MMIN) + " && (etiss_int32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs2 % 32U) + "U]) == -1) {\n";
cp.code() += "*((RV64IMACFD*)cpu)->X[" + std::to_string(rd % 32U) + "U] = -2147483648L;\n";
cp.code() += "}\n";
cp.code() += "else {\n";
cp.code() += "*((RV64IMACFD*)cpu)->X[" + std::to_string(rd % 32U) + "U] = (etiss_int64)(((etiss_int32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs1 % 32U) + "U]) / (etiss_int32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs2 % 32U) + "U])));\n";
cp.code() += "}\n";
cp.code() += "}\n";
cp.code() += "else {\n";
cp.code() += "*((RV64IMACFD*)cpu)->X[" + std::to_string(rd % 32U) + "U] = -1L;\n";
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32U], 64);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32U], 64);
		cp.getAffectedRegisters().add(reg_name[rd % 32U], 64);
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
ss << "divw" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// DIVUW -----------------------------------------------------------------------
static InstructionDefinition divuw_rd_rs1_rs2 (
	ISA32_RV64IMACFD,
	"divuw",
	(uint32_t) 0x200503b,
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

		cp.code() = std::string("//DIVUW\n");

// -----------------------------------------------------------------------------
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4UL) + "U;\n";
if ((rd % 32U) != 0U) {
cp.code() += "if ((etiss_uint32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs2 % 32U) + "U]) != 0U) {\n";
cp.code() += "*((RV64IMACFD*)cpu)->X[" + std::to_string(rd % 32U) + "U] = (etiss_uint64)((etiss_int32)(((etiss_uint32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs1 % 32U) + "U]) / (etiss_uint32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs2 % 32U) + "U]))));\n";
cp.code() += "}\n";
cp.code() += "else {\n";
cp.code() += "*((RV64IMACFD*)cpu)->X[" + std::to_string(rd % 32U) + "U] = -1L;\n";
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32U], 64);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32U], 64);
		cp.getAffectedRegisters().add(reg_name[rd % 32U], 64);
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
ss << "divuw" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// REMW ------------------------------------------------------------------------
static InstructionDefinition remw_rd_rs1_rs2 (
	ISA32_RV64IMACFD,
	"remw",
	(uint32_t) 0x200603b,
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

		cp.code() = std::string("//REMW\n");

// -----------------------------------------------------------------------------
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4UL) + "U;\n";
if ((rd % 32U) != 0U) {
cp.code() += "if (*((RV64IMACFD*)cpu)->X[" + std::to_string(rs2 % 32U) + "U] != 0UL) {\n";
etiss_int32 MMIN = 2147483648U;
cp.code() += "if ((etiss_int32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs1 % 32U) + "U]) == " + std::to_string(MMIN) + " && (etiss_int32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs2 % 32U) + "U]) == -1) {\n";
cp.code() += "*((RV64IMACFD*)cpu)->X[" + std::to_string(rd % 32U) + "U] = 0UL;\n";
cp.code() += "}\n";
cp.code() += "else {\n";
cp.code() += "*((RV64IMACFD*)cpu)->X[" + std::to_string(rd % 32U) + "U] = (etiss_int64)(((etiss_int32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs1 % 32U) + "U]) % (etiss_int32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs2 % 32U) + "U])));\n";
cp.code() += "}\n";
cp.code() += "}\n";
cp.code() += "else {\n";
cp.code() += "*((RV64IMACFD*)cpu)->X[" + std::to_string(rd % 32U) + "U] = (etiss_int64)(((etiss_int32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs1 % 32U) + "U])));\n";
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32U], 64);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32U], 64);
		cp.getAffectedRegisters().add(reg_name[rd % 32U], 64);
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
ss << "remw" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// REMUW -----------------------------------------------------------------------
static InstructionDefinition remuw_rd_rs1_rs2 (
	ISA32_RV64IMACFD,
	"remuw",
	(uint32_t) 0x200703b,
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

		cp.code() = std::string("//REMUW\n");

// -----------------------------------------------------------------------------
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4UL) + "U;\n";
if ((rd % 32U) != 0U) {
cp.code() += "if ((etiss_uint32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs2 % 32U) + "U]) != 0U) {\n";
cp.code() += "*((RV64IMACFD*)cpu)->X[" + std::to_string(rd % 32U) + "U] = (etiss_uint64)((etiss_int32)(((etiss_uint32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs1 % 32U) + "U]) % (etiss_uint32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs2 % 32U) + "U]))));\n";
cp.code() += "}\n";
cp.code() += "else {\n";
cp.code() += "*((RV64IMACFD*)cpu)->X[" + std::to_string(rd % 32U) + "U] = (etiss_uint64)(((etiss_int32)(*((RV64IMACFD*)cpu)->X[" + std::to_string(rs1 % 32U) + "U])));\n";
cp.code() += "}\n";
}
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getRegisterDependencies().add(reg_name[rs1 % 32U], 64);
		cp.getRegisterDependencies().add(reg_name[rs2 % 32U], 64);
		cp.getAffectedRegisters().add(reg_name[rd % 32U], 64);
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
ss << "remuw" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);