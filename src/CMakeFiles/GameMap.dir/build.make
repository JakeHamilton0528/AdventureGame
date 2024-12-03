# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/jakehamil/dev/main/AdventureGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jakehamil/dev/main/AdventureGame

# Include any dependencies generated for this target.
include src/CMakeFiles/GameMap.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/GameMap.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/GameMap.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/GameMap.dir/flags.make

src/CMakeFiles/GameMap.dir/Node.cpp.o: src/CMakeFiles/GameMap.dir/flags.make
src/CMakeFiles/GameMap.dir/Node.cpp.o: src/Node.cpp
src/CMakeFiles/GameMap.dir/Node.cpp.o: src/CMakeFiles/GameMap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jakehamil/dev/main/AdventureGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/GameMap.dir/Node.cpp.o"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/GameMap.dir/Node.cpp.o -MF CMakeFiles/GameMap.dir/Node.cpp.o.d -o CMakeFiles/GameMap.dir/Node.cpp.o -c /home/jakehamil/dev/main/AdventureGame/src/Node.cpp

src/CMakeFiles/GameMap.dir/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/GameMap.dir/Node.cpp.i"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakehamil/dev/main/AdventureGame/src/Node.cpp > CMakeFiles/GameMap.dir/Node.cpp.i

src/CMakeFiles/GameMap.dir/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/GameMap.dir/Node.cpp.s"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakehamil/dev/main/AdventureGame/src/Node.cpp -o CMakeFiles/GameMap.dir/Node.cpp.s

src/CMakeFiles/GameMap.dir/Asset.cpp.o: src/CMakeFiles/GameMap.dir/flags.make
src/CMakeFiles/GameMap.dir/Asset.cpp.o: src/Asset.cpp
src/CMakeFiles/GameMap.dir/Asset.cpp.o: src/CMakeFiles/GameMap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jakehamil/dev/main/AdventureGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/GameMap.dir/Asset.cpp.o"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/GameMap.dir/Asset.cpp.o -MF CMakeFiles/GameMap.dir/Asset.cpp.o.d -o CMakeFiles/GameMap.dir/Asset.cpp.o -c /home/jakehamil/dev/main/AdventureGame/src/Asset.cpp

src/CMakeFiles/GameMap.dir/Asset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/GameMap.dir/Asset.cpp.i"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakehamil/dev/main/AdventureGame/src/Asset.cpp > CMakeFiles/GameMap.dir/Asset.cpp.i

src/CMakeFiles/GameMap.dir/Asset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/GameMap.dir/Asset.cpp.s"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakehamil/dev/main/AdventureGame/src/Asset.cpp -o CMakeFiles/GameMap.dir/Asset.cpp.s

src/CMakeFiles/GameMap.dir/Combat.cpp.o: src/CMakeFiles/GameMap.dir/flags.make
src/CMakeFiles/GameMap.dir/Combat.cpp.o: src/Combat.cpp
src/CMakeFiles/GameMap.dir/Combat.cpp.o: src/CMakeFiles/GameMap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jakehamil/dev/main/AdventureGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/GameMap.dir/Combat.cpp.o"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/GameMap.dir/Combat.cpp.o -MF CMakeFiles/GameMap.dir/Combat.cpp.o.d -o CMakeFiles/GameMap.dir/Combat.cpp.o -c /home/jakehamil/dev/main/AdventureGame/src/Combat.cpp

src/CMakeFiles/GameMap.dir/Combat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/GameMap.dir/Combat.cpp.i"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakehamil/dev/main/AdventureGame/src/Combat.cpp > CMakeFiles/GameMap.dir/Combat.cpp.i

src/CMakeFiles/GameMap.dir/Combat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/GameMap.dir/Combat.cpp.s"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakehamil/dev/main/AdventureGame/src/Combat.cpp -o CMakeFiles/GameMap.dir/Combat.cpp.s

src/CMakeFiles/GameMap.dir/Player.cpp.o: src/CMakeFiles/GameMap.dir/flags.make
src/CMakeFiles/GameMap.dir/Player.cpp.o: src/Player.cpp
src/CMakeFiles/GameMap.dir/Player.cpp.o: src/CMakeFiles/GameMap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jakehamil/dev/main/AdventureGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/GameMap.dir/Player.cpp.o"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/GameMap.dir/Player.cpp.o -MF CMakeFiles/GameMap.dir/Player.cpp.o.d -o CMakeFiles/GameMap.dir/Player.cpp.o -c /home/jakehamil/dev/main/AdventureGame/src/Player.cpp

src/CMakeFiles/GameMap.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/GameMap.dir/Player.cpp.i"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakehamil/dev/main/AdventureGame/src/Player.cpp > CMakeFiles/GameMap.dir/Player.cpp.i

src/CMakeFiles/GameMap.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/GameMap.dir/Player.cpp.s"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakehamil/dev/main/AdventureGame/src/Player.cpp -o CMakeFiles/GameMap.dir/Player.cpp.s

src/CMakeFiles/GameMap.dir/Monster.cpp.o: src/CMakeFiles/GameMap.dir/flags.make
src/CMakeFiles/GameMap.dir/Monster.cpp.o: src/Monster.cpp
src/CMakeFiles/GameMap.dir/Monster.cpp.o: src/CMakeFiles/GameMap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jakehamil/dev/main/AdventureGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/GameMap.dir/Monster.cpp.o"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/GameMap.dir/Monster.cpp.o -MF CMakeFiles/GameMap.dir/Monster.cpp.o.d -o CMakeFiles/GameMap.dir/Monster.cpp.o -c /home/jakehamil/dev/main/AdventureGame/src/Monster.cpp

src/CMakeFiles/GameMap.dir/Monster.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/GameMap.dir/Monster.cpp.i"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakehamil/dev/main/AdventureGame/src/Monster.cpp > CMakeFiles/GameMap.dir/Monster.cpp.i

src/CMakeFiles/GameMap.dir/Monster.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/GameMap.dir/Monster.cpp.s"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakehamil/dev/main/AdventureGame/src/Monster.cpp -o CMakeFiles/GameMap.dir/Monster.cpp.s

src/CMakeFiles/GameMap.dir/GameMap.cpp.o: src/CMakeFiles/GameMap.dir/flags.make
src/CMakeFiles/GameMap.dir/GameMap.cpp.o: src/GameMap.cpp
src/CMakeFiles/GameMap.dir/GameMap.cpp.o: src/CMakeFiles/GameMap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jakehamil/dev/main/AdventureGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/GameMap.dir/GameMap.cpp.o"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/GameMap.dir/GameMap.cpp.o -MF CMakeFiles/GameMap.dir/GameMap.cpp.o.d -o CMakeFiles/GameMap.dir/GameMap.cpp.o -c /home/jakehamil/dev/main/AdventureGame/src/GameMap.cpp

src/CMakeFiles/GameMap.dir/GameMap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/GameMap.dir/GameMap.cpp.i"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jakehamil/dev/main/AdventureGame/src/GameMap.cpp > CMakeFiles/GameMap.dir/GameMap.cpp.i

src/CMakeFiles/GameMap.dir/GameMap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/GameMap.dir/GameMap.cpp.s"
	cd /home/jakehamil/dev/main/AdventureGame/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jakehamil/dev/main/AdventureGame/src/GameMap.cpp -o CMakeFiles/GameMap.dir/GameMap.cpp.s

# Object files for target GameMap
GameMap_OBJECTS = \
"CMakeFiles/GameMap.dir/Node.cpp.o" \
"CMakeFiles/GameMap.dir/Asset.cpp.o" \
"CMakeFiles/GameMap.dir/Combat.cpp.o" \
"CMakeFiles/GameMap.dir/Player.cpp.o" \
"CMakeFiles/GameMap.dir/Monster.cpp.o" \
"CMakeFiles/GameMap.dir/GameMap.cpp.o"

# External object files for target GameMap
GameMap_EXTERNAL_OBJECTS =

src/libGameMap.a: src/CMakeFiles/GameMap.dir/Node.cpp.o
src/libGameMap.a: src/CMakeFiles/GameMap.dir/Asset.cpp.o
src/libGameMap.a: src/CMakeFiles/GameMap.dir/Combat.cpp.o
src/libGameMap.a: src/CMakeFiles/GameMap.dir/Player.cpp.o
src/libGameMap.a: src/CMakeFiles/GameMap.dir/Monster.cpp.o
src/libGameMap.a: src/CMakeFiles/GameMap.dir/GameMap.cpp.o
src/libGameMap.a: src/CMakeFiles/GameMap.dir/build.make
src/libGameMap.a: src/CMakeFiles/GameMap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jakehamil/dev/main/AdventureGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library libGameMap.a"
	cd /home/jakehamil/dev/main/AdventureGame/src && $(CMAKE_COMMAND) -P CMakeFiles/GameMap.dir/cmake_clean_target.cmake
	cd /home/jakehamil/dev/main/AdventureGame/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GameMap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/GameMap.dir/build: src/libGameMap.a
.PHONY : src/CMakeFiles/GameMap.dir/build

src/CMakeFiles/GameMap.dir/clean:
	cd /home/jakehamil/dev/main/AdventureGame/src && $(CMAKE_COMMAND) -P CMakeFiles/GameMap.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/GameMap.dir/clean

src/CMakeFiles/GameMap.dir/depend:
	cd /home/jakehamil/dev/main/AdventureGame && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jakehamil/dev/main/AdventureGame /home/jakehamil/dev/main/AdventureGame/src /home/jakehamil/dev/main/AdventureGame /home/jakehamil/dev/main/AdventureGame/src /home/jakehamil/dev/main/AdventureGame/src/CMakeFiles/GameMap.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/CMakeFiles/GameMap.dir/depend

