# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wang/workspace/project/CGameServer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wang/workspace/project/CGameServer/build

# Include any dependencies generated for this target.
include CMakeFiles/DataBaseTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/DataBaseTest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/DataBaseTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DataBaseTest.dir/flags.make

CMakeFiles/DataBaseTest.dir/src/DataBase.cpp.o: CMakeFiles/DataBaseTest.dir/flags.make
CMakeFiles/DataBaseTest.dir/src/DataBase.cpp.o: ../src/DataBase.cpp
CMakeFiles/DataBaseTest.dir/src/DataBase.cpp.o: CMakeFiles/DataBaseTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wang/workspace/project/CGameServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DataBaseTest.dir/src/DataBase.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DataBaseTest.dir/src/DataBase.cpp.o -MF CMakeFiles/DataBaseTest.dir/src/DataBase.cpp.o.d -o CMakeFiles/DataBaseTest.dir/src/DataBase.cpp.o -c /home/wang/workspace/project/CGameServer/src/DataBase.cpp

CMakeFiles/DataBaseTest.dir/src/DataBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataBaseTest.dir/src/DataBase.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wang/workspace/project/CGameServer/src/DataBase.cpp > CMakeFiles/DataBaseTest.dir/src/DataBase.cpp.i

CMakeFiles/DataBaseTest.dir/src/DataBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataBaseTest.dir/src/DataBase.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wang/workspace/project/CGameServer/src/DataBase.cpp -o CMakeFiles/DataBaseTest.dir/src/DataBase.cpp.s

CMakeFiles/DataBaseTest.dir/src/DataBaseTest.cpp.o: CMakeFiles/DataBaseTest.dir/flags.make
CMakeFiles/DataBaseTest.dir/src/DataBaseTest.cpp.o: ../src/DataBaseTest.cpp
CMakeFiles/DataBaseTest.dir/src/DataBaseTest.cpp.o: CMakeFiles/DataBaseTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wang/workspace/project/CGameServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DataBaseTest.dir/src/DataBaseTest.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DataBaseTest.dir/src/DataBaseTest.cpp.o -MF CMakeFiles/DataBaseTest.dir/src/DataBaseTest.cpp.o.d -o CMakeFiles/DataBaseTest.dir/src/DataBaseTest.cpp.o -c /home/wang/workspace/project/CGameServer/src/DataBaseTest.cpp

CMakeFiles/DataBaseTest.dir/src/DataBaseTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataBaseTest.dir/src/DataBaseTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wang/workspace/project/CGameServer/src/DataBaseTest.cpp > CMakeFiles/DataBaseTest.dir/src/DataBaseTest.cpp.i

CMakeFiles/DataBaseTest.dir/src/DataBaseTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataBaseTest.dir/src/DataBaseTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wang/workspace/project/CGameServer/src/DataBaseTest.cpp -o CMakeFiles/DataBaseTest.dir/src/DataBaseTest.cpp.s

# Object files for target DataBaseTest
DataBaseTest_OBJECTS = \
"CMakeFiles/DataBaseTest.dir/src/DataBase.cpp.o" \
"CMakeFiles/DataBaseTest.dir/src/DataBaseTest.cpp.o"

# External object files for target DataBaseTest
DataBaseTest_EXTERNAL_OBJECTS =

DataBaseTest: CMakeFiles/DataBaseTest.dir/src/DataBase.cpp.o
DataBaseTest: CMakeFiles/DataBaseTest.dir/src/DataBaseTest.cpp.o
DataBaseTest: CMakeFiles/DataBaseTest.dir/build.make
DataBaseTest: CMakeFiles/DataBaseTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wang/workspace/project/CGameServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable DataBaseTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DataBaseTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DataBaseTest.dir/build: DataBaseTest
.PHONY : CMakeFiles/DataBaseTest.dir/build

CMakeFiles/DataBaseTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DataBaseTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DataBaseTest.dir/clean

CMakeFiles/DataBaseTest.dir/depend:
	cd /home/wang/workspace/project/CGameServer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wang/workspace/project/CGameServer /home/wang/workspace/project/CGameServer /home/wang/workspace/project/CGameServer/build /home/wang/workspace/project/CGameServer/build /home/wang/workspace/project/CGameServer/build/CMakeFiles/DataBaseTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DataBaseTest.dir/depend

