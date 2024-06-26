/**

        @copyright

        <pre>

        Copyright 2018 Infineon Technologies AG

        This file is part of ETISS tool, see <https://github.com/tum-ei-eda/etiss>.

        The initial version of this software has been created with the funding support by the German Federal
        Ministry of Education and Research (BMBF) in the project EffektiV under grant 01IS13022.

        Redistribution and use in source and binary forms, with or without modification, are permitted
        provided that the following conditions are met:

        1. Redistributions of source code must retain the above copyright notice, this list of conditions and
        the following disclaimer.

        2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions
        and the following disclaimer in the documentation and/or other materials provided with the distribution.

        3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse
        or promote products derived from this software without specific prior written permission.

        THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED
        WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
        PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
        DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
        PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
        HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
        NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
        POSSIBILITY OF SUCH DAMAGE.

        </pre>

        @author Marc Greim <marc.greim@mytum.de>, Chair of Electronic Design Automation, TUM

        @date July 28, 2014

        @version 0.1

*/
/**
        @file

        @brief simple test system implementation

*/

#ifndef ETISS_INCLUDE_SimpleMemSystem_H_
#define ETISS_INCLUDE_SimpleMemSystem_H_
#include "etiss/System.h"
#include "etiss/make_unique.h"
#include <fstream>
#include <random>

#include <cstring>
#include <iostream>
#include <memory>
#include <map>

namespace etiss
{

class MemSegment
{
    bool self_allocated_{ false };

  public:
    enum access_t {
        UNSET = 0,
        READ = 1,
        WRITE = 2,
        EXEC = 4
    };
    /*
    typedef enum ACCESS
    {
        READ,
        WRITE,
    } access_t;
    */
    etiss::uint8 *mem_;

    std::string name_;
    const etiss::uint64 start_addr_;
    const etiss::uint64 end_addr_;
    const etiss::uint64 size_;
    access_t mode_;

    /// @brief Constructor of Memory Segment
    /// @param start_addr Start address of segment
    /// @param size Size in bytes
    /// @param mode Access Mode (R/W/X)
    /// @param name Segment name
    /// @param mem Pre-allocated Memory (not overwritten with initString)
    /// @param initString String for initialization with imple_mem_system.memseg_initelement_ value: hex_string with 0x... / string /random options
    /// @param InitEleSet Should self allocated MemSegment be initialized?
    /// @param randomRoot If initString==Random use this value as generator root
    MemSegment(etiss::uint64 start_addr, etiss::uint64 size, access_t mode, const std::string name,
               etiss::uint8 *mem = nullptr, std::string initString = "", bool InitEleSet = false, uint64_t randomRoot = 0);

    // Can be overwritten afterwards with load_elf
    void memInit(std::string initString, uint64_t randomRoot = 0);

    virtual ~MemSegment(void)
    {
        if (self_allocated_ == true)
            delete[] mem_;
    }

    void load(const void *data, size_t offset, size_t file_size_bytes);

    bool addr_in_range(etiss::uint64 addr) const;

    bool payload_in_range(etiss::uint64 addr, etiss::uint64 payload_size) const;
};

/**
        @brief simple etiss:System implementation for testing
*/
class SimpleMemSystem : public System
{
  public:
    SimpleMemSystem(void);

    virtual ~SimpleMemSystem(void)
    {
        for (auto &mseg : msegs_)
            mseg.reset();
    }
    // memory access
    etiss::int32 iread(ETISS_CPU *cpu, etiss::uint64 addr, etiss::uint32 len);
    etiss::int32 iwrite(ETISS_CPU *cpu, etiss::uint64 addr, etiss::uint8 *buf, etiss::uint32 len);
    etiss::int32 dread(ETISS_CPU *cpu, etiss::uint64 addr, etiss::uint8 *buf, etiss::uint32 len);
    etiss::int32 dwrite(ETISS_CPU *cpu, etiss::uint64 addr, etiss::uint8 *buf, etiss::uint32 len);
    etiss::int32 dbg_read(etiss::uint64 addr, etiss::uint8 *buf, etiss::uint32 len);
    etiss::int32 dbg_write(etiss::uint64 addr, etiss::uint8 *buf, etiss::uint32 len);

    // sync time
    void syncTime(ETISS_CPU *cpu);

    void init_memory();
    void load_elf();
    void load_segments(void);
    etiss::uint64 get_startaddr(void) { return (start_addr_); }
    void add_memsegment(std::unique_ptr<MemSegment>& mseg, const void *raw_data, size_t file_size_bytes);

  private:
    std::vector<std::unique_ptr<MemSegment>> msegs_{};

    template <bool write>
    etiss::int32 dbus_access(ETISS_CPU *cpu, etiss::uint64 addr, etiss::uint8 *buf, etiss::uint32 len);

    etiss::uint64 start_addr_{ 0 };

    struct find_fitting_mseg {
        find_fitting_mseg(uint64 addr, uint64 size) : addr(addr), size(size) {}
        bool operator() (const std::unique_ptr<MemSegment> & mseg) { return mseg->payload_in_range(addr, size); }
    private:
        uint64 addr, size;
    };

    bool print_ibus_access_;
    bool print_dbus_access_;
    bool print_dbgbus_access_;
    bool print_to_file_;

    bool error_on_seg_mismatch_;

    int message_max_cnt_;

    std::ofstream trace_file_dbus_;

    std::map<etiss::uint64, etiss::uint64> configured_address_spaces_;
};

} // namespace etiss

#endif
