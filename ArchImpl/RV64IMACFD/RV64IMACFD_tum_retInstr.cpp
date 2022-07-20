/**
 * Generated on Wed, 20 Jul 2022 14:09:02 +0200.
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
partInit.code() += "cpu->instructionPointer = " + std::to_string(ic.current_address_ + 4UL) + ";\n";
partInit.code() += "*((RV64IMACFD*)cpu)->CSR[3088U] = (*((RV64IMACFD*)cpu)->CSR[768] & 6144UL) >> 11U;\n";
partInit.code() += "*((RV64IMACFD*)cpu)->CSR[768] = *((RV64IMACFD*)cpu)->CSR[768] ^ (*((RV64IMACFD*)cpu)->CSR[768] & 6144UL);\n";
partInit.code() += "*((RV64IMACFD*)cpu)->CSR[768] = *((RV64IMACFD*)cpu)->CSR[768] ^ ((*((RV64IMACFD*)cpu)->CSR[768] & 128UL) >> 4U) ^ (*((RV64IMACFD*)cpu)->CSR[768] & 8UL);\n";
partInit.code() += "cpu->instructionPointer = *((RV64IMACFD*)cpu)->CSR[833];\n";
partInit.code() += "*((RV64IMACFD*)cpu)->CSR[0U] = *((RV64IMACFD*)cpu)->CSR[768];\n";
partInit.code() += "*((RV64IMACFD*)cpu)->CSR[" + std::to_string(256) + "] = *((RV64IMACFD*)cpu)->CSR[768];\n";
partInit.code() += "return ((RV64IMACFD*)cpu)->exception;\n";
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

// URET ------------------------------------------------------------------------
static InstructionDefinition uret_ (
	ISA32_RV64IMACFD,
	"uret",
	(uint32_t) 0x200073,
	(uint32_t) 0xffffffff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

		CodePart & partInit = cs.append(CodePart::INITIALREQUIRED);

		partInit.code() = std::string("//URET\n");

// -----------------------------------------------------------------------------
partInit.code() += "cpu->instructionPointer = " + std::to_string(ic.current_address_ + 4UL) + ";\n";
partInit.code() += "*((RV64IMACFD*)cpu)->CSR[3088U] = 0UL;\n";
partInit.code() += "*((RV64IMACFD*)cpu)->CSR[0U] = *((RV64IMACFD*)cpu)->CSR[0U] ^ ((*((RV64IMACFD*)cpu)->CSR[0U] & 16UL) >> 4U) ^ (*((RV64IMACFD*)cpu)->CSR[0U] & 1UL);\n";
partInit.code() += "cpu->instructionPointer = *((RV64IMACFD*)cpu)->CSR[65U];\n";
partInit.code() += "*((RV64IMACFD*)cpu)->CSR[" + std::to_string(768) + "] = *((RV64IMACFD*)cpu)->CSR[0U];\n";
partInit.code() += "*((RV64IMACFD*)cpu)->CSR[" + std::to_string(256) + "] = *((RV64IMACFD*)cpu)->CSR[0U];\n";
partInit.code() += "return ((RV64IMACFD*)cpu)->exception;\n";
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
ss << "uret" << " # " << ba << (" []");
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
partInit.code() += "cpu->instructionPointer = " + std::to_string(ic.current_address_ + 4UL) + ";\n";
partInit.code() += "*((RV64IMACFD*)cpu)->CSR[3088U] = (*((RV64IMACFD*)cpu)->CSR[256] & 256UL) >> 8U;\n";
partInit.code() += "*((RV64IMACFD*)cpu)->CSR[256] = *((RV64IMACFD*)cpu)->CSR[256] ^ (*((RV64IMACFD*)cpu)->CSR[256] & 256UL);\n";
partInit.code() += "*((RV64IMACFD*)cpu)->CSR[256] = *((RV64IMACFD*)cpu)->CSR[256] ^ ((*((RV64IMACFD*)cpu)->CSR[256] & 32UL) >> 4U) ^ (*((RV64IMACFD*)cpu)->CSR[256] & 2UL);\n";
partInit.code() += "cpu->instructionPointer = *((RV64IMACFD*)cpu)->CSR[321];\n";
partInit.code() += "*((RV64IMACFD*)cpu)->CSR[" + std::to_string(768) + "] = *((RV64IMACFD*)cpu)->CSR[256];\n";
partInit.code() += "*((RV64IMACFD*)cpu)->CSR[0U] = *((RV64IMACFD*)cpu)->CSR[256];\n";
partInit.code() += "return ((RV64IMACFD*)cpu)->exception;\n";
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
