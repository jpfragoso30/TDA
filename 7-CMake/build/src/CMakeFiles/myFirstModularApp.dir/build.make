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
CMAKE_SOURCE_DIR = /Users/frags/Desktop/TDA/TDA/7-CMake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/frags/Desktop/TDA/TDA/7-CMake/build

# Include any dependencies generated for this target.
include src/CMakeFiles/myFirstModularApp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/myFirstModularApp.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/myFirstModularApp.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/myFirstModularApp.dir/flags.make

src/CMakeFiles/myFirstModularApp.dir/main.c.o: src/CMakeFiles/myFirstModularApp.dir/flags.make
src/CMakeFiles/myFirstModularApp.dir/main.c.o: ../src/main.c
src/CMakeFiles/myFirstModularApp.dir/main.c.o: src/CMakeFiles/myFirstModularApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/frags/Desktop/TDA/TDA/7-CMake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/myFirstModularApp.dir/main.c.o"
	cd /Users/frags/Desktop/TDA/TDA/7-CMake/build/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/CMakeFiles/myFirstModularApp.dir/main.c.o -MF CMakeFiles/myFirstModularApp.dir/main.c.o.d -o CMakeFiles/myFirstModularApp.dir/main.c.o -c /Users/frags/Desktop/TDA/TDA/7-CMake/src/main.c

src/CMakeFiles/myFirstModularApp.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/myFirstModularApp.dir/main.c.i"
	cd /Users/frags/Desktop/TDA/TDA/7-CMake/build/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/frags/Desktop/TDA/TDA/7-CMake/src/main.c > CMakeFiles/myFirstModularApp.dir/main.c.i

src/CMakeFiles/myFirstModularApp.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/myFirstModularApp.dir/main.c.s"
	cd /Users/frags/Desktop/TDA/TDA/7-CMake/build/src && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/frags/Desktop/TDA/TDA/7-CMake/src/main.c -o CMakeFiles/myFirstModularApp.dir/main.c.s

# Object files for target myFirstModularApp
myFirstModularApp_OBJECTS = \
"CMakeFiles/myFirstModularApp.dir/main.c.o"

# External object files for target myFirstModularApp
myFirstModularApp_EXTERNAL_OBJECTS =

src/myFirstModularApp: src/CMakeFiles/myFirstModularApp.dir/main.c.o
src/myFirstModularApp: src/CMakeFiles/myFirstModularApp.dir/build.make
src/myFirstModularApp: src/CMakeFiles/myFirstModularApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/frags/Desktop/TDA/TDA/7-CMake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable myFirstModularApp"
	cd /Users/frags/Desktop/TDA/TDA/7-CMake/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myFirstModularApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/myFirstModularApp.dir/build: src/myFirstModularApp
.PHONY : src/CMakeFiles/myFirstModularApp.dir/build

src/CMakeFiles/myFirstModularApp.dir/clean:
	cd /Users/frags/Desktop/TDA/TDA/7-CMake/build/src && $(CMAKE_COMMAND) -P CMakeFiles/myFirstModularApp.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/myFirstModularApp.dir/clean

src/CMakeFiles/myFirstModularApp.dir/depend:
	cd /Users/frags/Desktop/TDA/TDA/7-CMake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/frags/Desktop/TDA/TDA/7-CMake /Users/frags/Desktop/TDA/TDA/7-CMake/src /Users/frags/Desktop/TDA/TDA/7-CMake/build /Users/frags/Desktop/TDA/TDA/7-CMake/build/src /Users/frags/Desktop/TDA/TDA/7-CMake/build/src/CMakeFiles/myFirstModularApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/myFirstModularApp.dir/depend

