# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anoushka/workspace/etiss

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anoushka/workspace/etiss/trial8

# Include any dependencies generated for this target.
include JITImpl/GCC/CMakeFiles/GCCJIT.dir/depend.make

# Include the progress variables for this target.
include JITImpl/GCC/CMakeFiles/GCCJIT.dir/progress.make

# Include the compile flags for this target's objects.
include JITImpl/GCC/CMakeFiles/GCCJIT.dir/flags.make

JITImpl/GCC/CMakeFiles/GCCJIT.dir/GCCJIT.cpp.o: JITImpl/GCC/CMakeFiles/GCCJIT.dir/flags.make
JITImpl/GCC/CMakeFiles/GCCJIT.dir/GCCJIT.cpp.o: ../JITImpl/GCC/GCCJIT.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anoushka/workspace/etiss/trial8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object JITImpl/GCC/CMakeFiles/GCCJIT.dir/GCCJIT.cpp.o"
	cd /home/anoushka/workspace/etiss/trial8/JITImpl/GCC && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GCCJIT.dir/GCCJIT.cpp.o -c /home/anoushka/workspace/etiss/JITImpl/GCC/GCCJIT.cpp

JITImpl/GCC/CMakeFiles/GCCJIT.dir/GCCJIT.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GCCJIT.dir/GCCJIT.cpp.i"
	cd /home/anoushka/workspace/etiss/trial8/JITImpl/GCC && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anoushka/workspace/etiss/JITImpl/GCC/GCCJIT.cpp > CMakeFiles/GCCJIT.dir/GCCJIT.cpp.i

JITImpl/GCC/CMakeFiles/GCCJIT.dir/GCCJIT.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GCCJIT.dir/GCCJIT.cpp.s"
	cd /home/anoushka/workspace/etiss/trial8/JITImpl/GCC && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anoushka/workspace/etiss/JITImpl/GCC/GCCJIT.cpp -o CMakeFiles/GCCJIT.dir/GCCJIT.cpp.s

JITImpl/GCC/CMakeFiles/GCCJIT.dir/GCCJITLIB.cpp.o: JITImpl/GCC/CMakeFiles/GCCJIT.dir/flags.make
JITImpl/GCC/CMakeFiles/GCCJIT.dir/GCCJITLIB.cpp.o: ../JITImpl/GCC/GCCJITLIB.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anoushka/workspace/etiss/trial8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object JITImpl/GCC/CMakeFiles/GCCJIT.dir/GCCJITLIB.cpp.o"
	cd /home/anoushka/workspace/etiss/trial8/JITImpl/GCC && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GCCJIT.dir/GCCJITLIB.cpp.o -c /home/anoushka/workspace/etiss/JITImpl/GCC/GCCJITLIB.cpp

JITImpl/GCC/CMakeFiles/GCCJIT.dir/GCCJITLIB.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GCCJIT.dir/GCCJITLIB.cpp.i"
	cd /home/anoushka/workspace/etiss/trial8/JITImpl/GCC && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anoushka/workspace/etiss/JITImpl/GCC/GCCJITLIB.cpp > CMakeFiles/GCCJIT.dir/GCCJITLIB.cpp.i

JITImpl/GCC/CMakeFiles/GCCJIT.dir/GCCJITLIB.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GCCJIT.dir/GCCJITLIB.cpp.s"
	cd /home/anoushka/workspace/etiss/trial8/JITImpl/GCC && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anoushka/workspace/etiss/JITImpl/GCC/GCCJITLIB.cpp -o CMakeFiles/GCCJIT.dir/GCCJITLIB.cpp.s

# Object files for target GCCJIT
GCCJIT_OBJECTS = \
"CMakeFiles/GCCJIT.dir/GCCJIT.cpp.o" \
"CMakeFiles/GCCJIT.dir/GCCJITLIB.cpp.o"

# External object files for target GCCJIT
GCCJIT_EXTERNAL_OBJECTS =

JITImpl/GCC/libGCCJIT.so: JITImpl/GCC/CMakeFiles/GCCJIT.dir/GCCJIT.cpp.o
JITImpl/GCC/libGCCJIT.so: JITImpl/GCC/CMakeFiles/GCCJIT.dir/GCCJITLIB.cpp.o
JITImpl/GCC/libGCCJIT.so: JITImpl/GCC/CMakeFiles/GCCJIT.dir/build.make
JITImpl/GCC/libGCCJIT.so: libETISS.so
JITImpl/GCC/libGCCJIT.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
JITImpl/GCC/libGCCJIT.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
JITImpl/GCC/libGCCJIT.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
JITImpl/GCC/libGCCJIT.so: JITImpl/GCC/CMakeFiles/GCCJIT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anoushka/workspace/etiss/trial8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libGCCJIT.so"
	cd /home/anoushka/workspace/etiss/trial8/JITImpl/GCC && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GCCJIT.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
JITImpl/GCC/CMakeFiles/GCCJIT.dir/build: JITImpl/GCC/libGCCJIT.so

.PHONY : JITImpl/GCC/CMakeFiles/GCCJIT.dir/build

JITImpl/GCC/CMakeFiles/GCCJIT.dir/clean:
	cd /home/anoushka/workspace/etiss/trial8/JITImpl/GCC && $(CMAKE_COMMAND) -P CMakeFiles/GCCJIT.dir/cmake_clean.cmake
.PHONY : JITImpl/GCC/CMakeFiles/GCCJIT.dir/clean

JITImpl/GCC/CMakeFiles/GCCJIT.dir/depend:
	cd /home/anoushka/workspace/etiss/trial8 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anoushka/workspace/etiss /home/anoushka/workspace/etiss/JITImpl/GCC /home/anoushka/workspace/etiss/trial8 /home/anoushka/workspace/etiss/trial8/JITImpl/GCC /home/anoushka/workspace/etiss/trial8/JITImpl/GCC/CMakeFiles/GCCJIT.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : JITImpl/GCC/CMakeFiles/GCCJIT.dir/depend

