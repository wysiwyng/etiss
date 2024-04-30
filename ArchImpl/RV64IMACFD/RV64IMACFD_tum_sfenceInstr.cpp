/**
 * Generated on Tue, 30 Apr 2024 14:18:29 +0200.
 *
 * This file contains the instruction behavior models of the tum_sfence
 * instruction set for the RV64IMACFD core architecture.
 */

#include "RV64IMACFDArch.h"
#include "RV64IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// SFENCE_VMA ------------------------------------------------------------------
static InstructionDefinition sfence_vma_rs1_rs2 (
	ISA32_RV64IMACFD,
	"sfence_vma",
	(uint32_t) 0x12000073,
	(uint32_t) 0xfe007fff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SFENCE_VMA\n");

// -----------------------------------------------------------------------------
cp.code() += "cpu->exception = ETISS_RETURNCODE_RELOADBLOCKS;\n";
cp.code() += "etiss_coverage_count(1, 241);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1191);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1190, 1186, 1189, 1187, 1188);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 8918);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV64IMACFD*)cpu)->FENCE[2ULL] = " + std::to_string(rs1) + "ULL;\n";
cp.code() += "etiss_coverage_count(4, 8880, 8878, 8877, 8879);\n";
cp.code() += "((RV64IMACFD*)cpu)->FENCE[3ULL] = " + std::to_string(rs2) + "ULL;\n";
cp.code() += "etiss_coverage_count(4, 8885, 8883, 8882, 8884);\n";
cp.code() += "etiss_uint64 vaddr = *((RV64IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_coverage_count(3, 8890, 8889, 8888);\n";
cp.code() += "etiss_uint64 asid = *((RV64IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL];\n";
cp.code() += "etiss_coverage_count(3, 8895, 8894, 8893);\n";
cp.code() += "etiss_coverage_count(1, 8896);\n";
if (rs1 == 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8899, 8897, 8898);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8907);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 8900);\n";
if (rs2 == 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8903, 8901, 8902);\n";
cp.code() += "RV64IMACFD_evict_all(cpu, system, plugin_pointers);\n";
cp.code() += "etiss_coverage_count(1, 8904);\n";
} // conditional
else { // conditional
cp.code() += "RV64IMACFD_evict_asid(cpu, system, plugin_pointers, asid);\n";
cp.code() += "etiss_coverage_count(2, 8906, 8905);\n";
} // conditional
cp.code() += "} // block\n";
} // block
} // conditional
else { // conditional
{ // block
cp.code() += "etiss_coverage_count(1, 8917);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 8908);\n";
if (rs2 == 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8911, 8909, 8910);\n";
cp.code() += "RV64IMACFD_evict_addr(cpu, system, plugin_pointers, vaddr);\n";
cp.code() += "etiss_coverage_count(2, 8913, 8912);\n";
} // conditional
else { // conditional
cp.code() += "RV64IMACFD_evict_addr_asid(cpu, system, plugin_pointers, vaddr, asid);\n";
cp.code() += "etiss_coverage_count(3, 8916, 8914, 8915);\n";
} // conditional
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
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//SFENCE_VMA\n");

// -----------------------------------------------------------------------------
cp.code() += "return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sfence_vma" << " # " << ba << (" [rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
