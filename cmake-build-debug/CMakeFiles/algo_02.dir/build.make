# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/ksc/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/ksc/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ksc/dev/workspace/CLang

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ksc/dev/workspace/CLang/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/algo_02.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/algo_02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/algo_02.dir/flags.make

CMakeFiles/algo_02.dir/algorithm/algo_02.c.o: CMakeFiles/algo_02.dir/flags.make
CMakeFiles/algo_02.dir/algorithm/algo_02.c.o: ../algorithm/algo_02.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ksc/dev/workspace/CLang/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/algo_02.dir/algorithm/algo_02.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/algo_02.dir/algorithm/algo_02.c.o   -c /home/ksc/dev/workspace/CLang/algorithm/algo_02.c

CMakeFiles/algo_02.dir/algorithm/algo_02.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/algo_02.dir/algorithm/algo_02.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ksc/dev/workspace/CLang/algorithm/algo_02.c > CMakeFiles/algo_02.dir/algorithm/algo_02.c.i

CMakeFiles/algo_02.dir/algorithm/algo_02.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/algo_02.dir/algorithm/algo_02.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ksc/dev/workspace/CLang/algorithm/algo_02.c -o CMakeFiles/algo_02.dir/algorithm/algo_02.c.s

# Object files for target algo_02
algo_02_OBJECTS = \
"CMakeFiles/algo_02.dir/algorithm/algo_02.c.o"

# External object files for target algo_02
algo_02_EXTERNAL_OBJECTS =

algo_02: CMakeFiles/algo_02.dir/algorithm/algo_02.c.o
algo_02: CMakeFiles/algo_02.dir/build.make
algo_02: CMakeFiles/algo_02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ksc/dev/workspace/CLang/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable algo_02"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/algo_02.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/algo_02.dir/build: algo_02

.PHONY : CMakeFiles/algo_02.dir/build

CMakeFiles/algo_02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/algo_02.dir/cmake_clean.cmake
.PHONY : CMakeFiles/algo_02.dir/clean

CMakeFiles/algo_02.dir/depend:
	cd /home/ksc/dev/workspace/CLang/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ksc/dev/workspace/CLang /home/ksc/dev/workspace/CLang /home/ksc/dev/workspace/CLang/cmake-build-debug /home/ksc/dev/workspace/CLang/cmake-build-debug /home/ksc/dev/workspace/CLang/cmake-build-debug/CMakeFiles/algo_02.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/algo_02.dir/depend

