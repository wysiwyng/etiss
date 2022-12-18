/**
 * Generated on Fri, 16 Dec 2022 20:48:36 +0100.
 *
 * This file contains the instruction behavior models of the tum_ret
 * instruction set for the RV64IMACFD core architecture.
 */

#include "RV64IMACFDArch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV64IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// MRET ------------------------------------------------------------------------
static InstructionDefinition mret_ (
	ISA32_RV64IMACFD,
	"mret",
	(uint32_t) 0x30200073,
	(uint32_t) 0xffffffff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

		CodePart & partInit = cs.append(CodePart::INITIALREQUIRED);

		partInit.code() = std::string("//MRET\n");

// -----------------------------------------------------------------------------
partInit.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4UL) + "U;\n";
partInit.code() += "if (((RV64IMACFD*)cpu)->PRIV < 3) {\n";
partInit.code() += "cpu->exception = 0; raise(cpu, system, plugin_pointers, 0U, 2);\n";
partInit.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
partInit.code() += "}\n";
partInit.code() += "cpu->nextPc = *((RV64IMACFD*)cpu)->CSR[833];\n";
partInit.code() += "etiss_uint64 s = *((RV64IMACFD*)cpu)->CSR[768];\n";
partInit.code() += "etiss_uint64 prev_prv = get_field(s, 6144);\n";
partInit.code() += "if (prev_prv != 3L) {\n";
partInit.code() += "s = set_field(s, 131072, 0U);\n";
partInit.code() += "}\n";
partInit.code() += "s = set_field(s, 8, get_field(s, 128));\n";
partInit.code() += "s = set_field(s, 128, 1U);\n";
partInit.code() += "s = set_field(s, 6144, (extension_enabled(cpu, system, plugin_pointers, 85U)) ? (0) : (3));\n";
partInit.code() += "*((RV64IMACFD*)cpu)->CSR[768] = s;\n";
partInit.code() += "((RV64IMACFD*)cpu)->PRIV = (prev_prv) & 0x7;\n";
partInit.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
partInit.code() += "cpu->instructionPointer = cpu->nextPc;\n";
partInit.code() += "return cpu->exception;\n";
// -----------------------------------------------------------------------------

		partInit.getAffectedRegisters().add("instructionPointer", 32);

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "mret" << " # " << ba << (" []");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SRET ------------------------------------------------------------------------
static InstructionDefinition sret_ (
	ISA32_RV64IMACFD,
	"sret",
	(uint32_t) 0x10200073,
	(uint32_t) 0xffffffff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

		CodePart & partInit = cs.append(CodePart::INITIALREQUIRED);

		partInit.code() = std::string("//SRET\n");

// -----------------------------------------------------------------------------
partInit.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4UL) + "U;\n";
partInit.code() += "if (((RV64IMACFD*)cpu)->PRIV < ((get_field(*((RV64IMACFD*)cpu)->CSR[768], 4194304)) ? (3) : (1))) {\n";
partInit.code() += "cpu->exception = 0; raise(cpu, system, plugin_pointers, 0U, 2);\n";
partInit.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
partInit.code() += "}\n";
partInit.code() += "cpu->nextPc = *((RV64IMACFD*)cpu)->CSR[321];\n";
partInit.code() += "etiss_uint64 s = *((RV64IMACFD*)cpu)->CSR[256];\n";
partInit.code() += "etiss_uint64 prev_prv = get_field(s, 256);\n";
partInit.code() += "s = set_field(s, 2, get_field(s, 32));\n";
partInit.code() += "s = set_field(s, 32, 1U);\n";
partInit.code() += "s = set_field(s, 256, 0);\n";
partInit.code() += "*((RV64IMACFD*)cpu)->CSR[768] = s;\n";
partInit.code() += "((RV64IMACFD*)cpu)->PRIV = (prev_prv) & 0x7;\n";
partInit.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
partInit.code() += "cpu->instructionPointer = cpu->nextPc;\n";
partInit.code() += "return cpu->exception;\n";
// -----------------------------------------------------------------------------

		partInit.getAffectedRegisters().add("instructionPointer", 32);

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sret" << " # " << ba << (" []");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
