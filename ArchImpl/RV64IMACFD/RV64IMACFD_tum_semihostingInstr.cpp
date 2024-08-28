/**
 * Generated on Tue, 30 Apr 2024 14:18:29 +0200.
 *
 * This file contains the instruction behavior models of the tum_semihosting
 * instruction set for the RV64IMACFD core architecture.
 */

#include "RV64IMACFDArch.h"
#include "RV64IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// EBREAK ----------------------------------------------------------------------
static InstructionDefinition ebreak_ (
	ISA32_RV64IMACFD,
	"ebreak",
	(uint32_t) 0x100073,
	(uint32_t) 0xffffffff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//EBREAK\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 183);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1191);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1190, 1186, 1189, 1187, 1188);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2285);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 2214);\n";
cp.code() += "if (etiss_semihost_enabled()) { // conditional\n";
cp.code() += "etiss_coverage_count(1, 2215);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 2280);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, " + std::to_string(ic.current_address_ - 4ULL) + "ULL, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV64IMACFD_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 pre = (etiss_uint32)(mem_val_0);\n";
cp.code() += "etiss_coverage_count(6, 2224, 2223, 2221, 2220, 2218, 2219);\n";
cp.code() += "etiss_uint32 mem_val_1;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, " + std::to_string(ic.current_address_ + 0LL) + "LL, (etiss_uint8*)&mem_val_1, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV64IMACFD_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 ebreak = (etiss_uint32)(mem_val_1);\n";
cp.code() += "etiss_coverage_count(6, 2233, 2232, 2230, 2229, 2227, 2228);\n";
cp.code() += "etiss_uint32 mem_val_2;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, " + std::to_string(ic.current_address_ + 4ULL) + "ULL, (etiss_uint8*)&mem_val_2, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV64IMACFD_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 post = (etiss_uint32)(mem_val_2);\n";
cp.code() += "etiss_coverage_count(6, 2242, 2241, 2239, 2238, 2236, 2237);\n";
cp.code() += "etiss_coverage_count(1, 2243);\n";
cp.code() += "if (pre == 32509971ULL && ebreak == 1048691ULL && post == 1081102355ULL) { // conditional\n";
cp.code() += "etiss_coverage_count(11, 2254, 2250, 2246, 2244, 2245, 2249, 2247, 2248, 2253, 2251, 2252);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 2275);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint64 operation = *((RV64IMACFD*)cpu)->X[10ULL];\n";
cp.code() += "etiss_coverage_count(3, 2259, 2258, 2257);\n";
cp.code() += "etiss_uint64 parameter = *((RV64IMACFD*)cpu)->X[11ULL];\n";
cp.code() += "etiss_coverage_count(3, 2264, 2263, 2262);\n";
cp.code() += "*((RV64IMACFD*)cpu)->X[10ULL] = (etiss_int64)(etiss_semihost(cpu, system, plugin_pointers, 64ULL, operation, parameter));\n";
cp.code() += "etiss_coverage_count(7, 2274, 2267, 2266, 2273, 2271, 2269, 2270);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 2279);\n";
cp.code() += "{ // block\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV64IMACFD_raise(cpu, system, plugin_pointers, 0LL, 3LL);\n";
cp.code() += "etiss_coverage_count(2, 2278, 2276);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 2284);\n";
cp.code() += "{ // block\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV64IMACFD_raise(cpu, system, plugin_pointers, 0LL, 3LL);\n";
cp.code() += "etiss_coverage_count(2, 2283, 2281);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
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

		cp.code() = std::string("//EBREAK\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending || cpu->exception || cpu->nextPc != " + std::to_string(ic.current_address_ + 4) + "ULL) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "ebreak" << " # " << ba << (" []");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
