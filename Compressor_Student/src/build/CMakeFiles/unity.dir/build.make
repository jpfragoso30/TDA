# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.21.3_1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.21.3_1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/frags/Desktop/5tosemestre/TDA/Compressor_Student/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/frags/Desktop/5tosemestre/TDA/Compressor_Student/src/build

# Include any dependencies generated for this target.
include CMakeFiles/unity.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/unity.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/unity.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/unity.dir/flags.make

CMakeFiles/unity.dir/unity.o: CMakeFiles/unity.dir/flags.make
CMakeFiles/unity.dir/unity.o: ../unity.c
CMakeFiles/unity.dir/unity.o: CMakeFiles/unity.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/frags/Desktop/5tosemestre/TDA/Compressor_Student/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/unity.dir/unity.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/unity.dir/unity.o -MF CMakeFiles/unity.dir/unity.o.d -o CMakeFiles/unity.dir/unity.o -c /Users/frags/Desktop/5tosemestre/TDA/Compressor_Student/src/unity.c

CMakeFiles/unity.dir/unity.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/unity.dir/unity.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/frags/Desktop/5tosemestre/TDA/Compressor_Student/src/unity.c > CMakeFiles/unity.dir/unity.i

CMakeFiles/unity.dir/unity.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/unity.dir/unity.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/frags/Desktop/5tosemestre/TDA/Compressor_Student/src/unity.c -o CMakeFiles/unity.dir/unity.s

# Object files for target unity
unity_OBJECTS = \
"CMakeFiles/unity.dir/unity.o"

# External object files for target unity
unity_EXTERNAL_OBJECTS =

libunity.a: CMakeFiles/unity.dir/unity.o
libunity.a: CMakeFiles/unity.dir/build.make
libunity.a: CMakeFiles/unity.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/frags/Desktop/5tosemestre/TDA/Compressor_Student/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libunity.a"
	$(CMAKE_COMMAND) -P CMakeFiles/unity.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unity.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/unity.dir/build: libunity.a
.PHONY : CMakeFiles/unity.dir/build

CMakeFiles/unity.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/unity.dir/cmake_clean.cmake
.PHONY : CMakeFiles/unity.dir/clean

CMakeFiles/unity.dir/depend:
	cd /Users/frags/Desktop/5tosemestre/TDA/Compressor_Student/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/frags/Desktop/5tosemestre/TDA/Compressor_Student/src /Users/frags/Desktop/5tosemestre/TDA/Compressor_Student/src /Users/frags/Desktop/5tosemestre/TDA/Compressor_Student/src/build /Users/frags/Desktop/5tosemestre/TDA/Compressor_Student/src/build /Users/frags/Desktop/5tosemestre/TDA/Compressor_Student/src/build/CMakeFiles/unity.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/unity.dir/depend

