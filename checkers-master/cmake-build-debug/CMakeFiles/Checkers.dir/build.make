# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /snap/clion/209/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/209/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Checkers.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Checkers.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Checkers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Checkers.dir/flags.make

CMakeFiles/Checkers.dir/src/AI.cpp.o: CMakeFiles/Checkers.dir/flags.make
CMakeFiles/Checkers.dir/src/AI.cpp.o: ../src/AI.cpp
CMakeFiles/Checkers.dir/src/AI.cpp.o: CMakeFiles/Checkers.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Checkers.dir/src/AI.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Checkers.dir/src/AI.cpp.o -MF CMakeFiles/Checkers.dir/src/AI.cpp.o.d -o CMakeFiles/Checkers.dir/src/AI.cpp.o -c /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/AI.cpp

CMakeFiles/Checkers.dir/src/AI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Checkers.dir/src/AI.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/AI.cpp > CMakeFiles/Checkers.dir/src/AI.cpp.i

CMakeFiles/Checkers.dir/src/AI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Checkers.dir/src/AI.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/AI.cpp -o CMakeFiles/Checkers.dir/src/AI.cpp.s

CMakeFiles/Checkers.dir/src/CheckerGame.cpp.o: CMakeFiles/Checkers.dir/flags.make
CMakeFiles/Checkers.dir/src/CheckerGame.cpp.o: ../src/CheckerGame.cpp
CMakeFiles/Checkers.dir/src/CheckerGame.cpp.o: CMakeFiles/Checkers.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Checkers.dir/src/CheckerGame.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Checkers.dir/src/CheckerGame.cpp.o -MF CMakeFiles/Checkers.dir/src/CheckerGame.cpp.o.d -o CMakeFiles/Checkers.dir/src/CheckerGame.cpp.o -c /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/CheckerGame.cpp

CMakeFiles/Checkers.dir/src/CheckerGame.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Checkers.dir/src/CheckerGame.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/CheckerGame.cpp > CMakeFiles/Checkers.dir/src/CheckerGame.cpp.i

CMakeFiles/Checkers.dir/src/CheckerGame.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Checkers.dir/src/CheckerGame.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/CheckerGame.cpp -o CMakeFiles/Checkers.dir/src/CheckerGame.cpp.s

CMakeFiles/Checkers.dir/src/Checkerboard.cpp.o: CMakeFiles/Checkers.dir/flags.make
CMakeFiles/Checkers.dir/src/Checkerboard.cpp.o: ../src/Checkerboard.cpp
CMakeFiles/Checkers.dir/src/Checkerboard.cpp.o: CMakeFiles/Checkers.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Checkers.dir/src/Checkerboard.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Checkers.dir/src/Checkerboard.cpp.o -MF CMakeFiles/Checkers.dir/src/Checkerboard.cpp.o.d -o CMakeFiles/Checkers.dir/src/Checkerboard.cpp.o -c /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Checkerboard.cpp

CMakeFiles/Checkers.dir/src/Checkerboard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Checkers.dir/src/Checkerboard.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Checkerboard.cpp > CMakeFiles/Checkers.dir/src/Checkerboard.cpp.i

CMakeFiles/Checkers.dir/src/Checkerboard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Checkers.dir/src/Checkerboard.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Checkerboard.cpp -o CMakeFiles/Checkers.dir/src/Checkerboard.cpp.s

CMakeFiles/Checkers.dir/src/Checkerpiece.cpp.o: CMakeFiles/Checkers.dir/flags.make
CMakeFiles/Checkers.dir/src/Checkerpiece.cpp.o: ../src/Checkerpiece.cpp
CMakeFiles/Checkers.dir/src/Checkerpiece.cpp.o: CMakeFiles/Checkers.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Checkers.dir/src/Checkerpiece.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Checkers.dir/src/Checkerpiece.cpp.o -MF CMakeFiles/Checkers.dir/src/Checkerpiece.cpp.o.d -o CMakeFiles/Checkers.dir/src/Checkerpiece.cpp.o -c /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Checkerpiece.cpp

CMakeFiles/Checkers.dir/src/Checkerpiece.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Checkers.dir/src/Checkerpiece.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Checkerpiece.cpp > CMakeFiles/Checkers.dir/src/Checkerpiece.cpp.i

CMakeFiles/Checkers.dir/src/Checkerpiece.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Checkers.dir/src/Checkerpiece.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Checkerpiece.cpp -o CMakeFiles/Checkers.dir/src/Checkerpiece.cpp.s

CMakeFiles/Checkers.dir/src/Checkers.cpp.o: CMakeFiles/Checkers.dir/flags.make
CMakeFiles/Checkers.dir/src/Checkers.cpp.o: ../src/Checkers.cpp
CMakeFiles/Checkers.dir/src/Checkers.cpp.o: CMakeFiles/Checkers.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Checkers.dir/src/Checkers.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Checkers.dir/src/Checkers.cpp.o -MF CMakeFiles/Checkers.dir/src/Checkers.cpp.o.d -o CMakeFiles/Checkers.dir/src/Checkers.cpp.o -c /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Checkers.cpp

CMakeFiles/Checkers.dir/src/Checkers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Checkers.dir/src/Checkers.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Checkers.cpp > CMakeFiles/Checkers.dir/src/Checkers.cpp.i

CMakeFiles/Checkers.dir/src/Checkers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Checkers.dir/src/Checkers.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Checkers.cpp -o CMakeFiles/Checkers.dir/src/Checkers.cpp.s

CMakeFiles/Checkers.dir/src/Main.cpp.o: CMakeFiles/Checkers.dir/flags.make
CMakeFiles/Checkers.dir/src/Main.cpp.o: ../src/Main.cpp
CMakeFiles/Checkers.dir/src/Main.cpp.o: CMakeFiles/Checkers.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Checkers.dir/src/Main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Checkers.dir/src/Main.cpp.o -MF CMakeFiles/Checkers.dir/src/Main.cpp.o.d -o CMakeFiles/Checkers.dir/src/Main.cpp.o -c /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Main.cpp

CMakeFiles/Checkers.dir/src/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Checkers.dir/src/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Main.cpp > CMakeFiles/Checkers.dir/src/Main.cpp.i

CMakeFiles/Checkers.dir/src/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Checkers.dir/src/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Main.cpp -o CMakeFiles/Checkers.dir/src/Main.cpp.s

CMakeFiles/Checkers.dir/src/Moveable.cpp.o: CMakeFiles/Checkers.dir/flags.make
CMakeFiles/Checkers.dir/src/Moveable.cpp.o: ../src/Moveable.cpp
CMakeFiles/Checkers.dir/src/Moveable.cpp.o: CMakeFiles/Checkers.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Checkers.dir/src/Moveable.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Checkers.dir/src/Moveable.cpp.o -MF CMakeFiles/Checkers.dir/src/Moveable.cpp.o.d -o CMakeFiles/Checkers.dir/src/Moveable.cpp.o -c /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Moveable.cpp

CMakeFiles/Checkers.dir/src/Moveable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Checkers.dir/src/Moveable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Moveable.cpp > CMakeFiles/Checkers.dir/src/Moveable.cpp.i

CMakeFiles/Checkers.dir/src/Moveable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Checkers.dir/src/Moveable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Moveable.cpp -o CMakeFiles/Checkers.dir/src/Moveable.cpp.s

CMakeFiles/Checkers.dir/src/Player.cpp.o: CMakeFiles/Checkers.dir/flags.make
CMakeFiles/Checkers.dir/src/Player.cpp.o: ../src/Player.cpp
CMakeFiles/Checkers.dir/src/Player.cpp.o: CMakeFiles/Checkers.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Checkers.dir/src/Player.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Checkers.dir/src/Player.cpp.o -MF CMakeFiles/Checkers.dir/src/Player.cpp.o.d -o CMakeFiles/Checkers.dir/src/Player.cpp.o -c /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Player.cpp

CMakeFiles/Checkers.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Checkers.dir/src/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Player.cpp > CMakeFiles/Checkers.dir/src/Player.cpp.i

CMakeFiles/Checkers.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Checkers.dir/src/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Player.cpp -o CMakeFiles/Checkers.dir/src/Player.cpp.s

CMakeFiles/Checkers.dir/src/SoundManager.cpp.o: CMakeFiles/Checkers.dir/flags.make
CMakeFiles/Checkers.dir/src/SoundManager.cpp.o: ../src/SoundManager.cpp
CMakeFiles/Checkers.dir/src/SoundManager.cpp.o: CMakeFiles/Checkers.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Checkers.dir/src/SoundManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Checkers.dir/src/SoundManager.cpp.o -MF CMakeFiles/Checkers.dir/src/SoundManager.cpp.o.d -o CMakeFiles/Checkers.dir/src/SoundManager.cpp.o -c /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/SoundManager.cpp

CMakeFiles/Checkers.dir/src/SoundManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Checkers.dir/src/SoundManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/SoundManager.cpp > CMakeFiles/Checkers.dir/src/SoundManager.cpp.i

CMakeFiles/Checkers.dir/src/SoundManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Checkers.dir/src/SoundManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/SoundManager.cpp -o CMakeFiles/Checkers.dir/src/SoundManager.cpp.s

CMakeFiles/Checkers.dir/src/Square.cpp.o: CMakeFiles/Checkers.dir/flags.make
CMakeFiles/Checkers.dir/src/Square.cpp.o: ../src/Square.cpp
CMakeFiles/Checkers.dir/src/Square.cpp.o: CMakeFiles/Checkers.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Checkers.dir/src/Square.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Checkers.dir/src/Square.cpp.o -MF CMakeFiles/Checkers.dir/src/Square.cpp.o.d -o CMakeFiles/Checkers.dir/src/Square.cpp.o -c /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Square.cpp

CMakeFiles/Checkers.dir/src/Square.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Checkers.dir/src/Square.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Square.cpp > CMakeFiles/Checkers.dir/src/Square.cpp.i

CMakeFiles/Checkers.dir/src/Square.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Checkers.dir/src/Square.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/src/Square.cpp -o CMakeFiles/Checkers.dir/src/Square.cpp.s

# Object files for target Checkers
Checkers_OBJECTS = \
"CMakeFiles/Checkers.dir/src/AI.cpp.o" \
"CMakeFiles/Checkers.dir/src/CheckerGame.cpp.o" \
"CMakeFiles/Checkers.dir/src/Checkerboard.cpp.o" \
"CMakeFiles/Checkers.dir/src/Checkerpiece.cpp.o" \
"CMakeFiles/Checkers.dir/src/Checkers.cpp.o" \
"CMakeFiles/Checkers.dir/src/Main.cpp.o" \
"CMakeFiles/Checkers.dir/src/Moveable.cpp.o" \
"CMakeFiles/Checkers.dir/src/Player.cpp.o" \
"CMakeFiles/Checkers.dir/src/SoundManager.cpp.o" \
"CMakeFiles/Checkers.dir/src/Square.cpp.o"

# External object files for target Checkers
Checkers_EXTERNAL_OBJECTS =

Checkers: CMakeFiles/Checkers.dir/src/AI.cpp.o
Checkers: CMakeFiles/Checkers.dir/src/CheckerGame.cpp.o
Checkers: CMakeFiles/Checkers.dir/src/Checkerboard.cpp.o
Checkers: CMakeFiles/Checkers.dir/src/Checkerpiece.cpp.o
Checkers: CMakeFiles/Checkers.dir/src/Checkers.cpp.o
Checkers: CMakeFiles/Checkers.dir/src/Main.cpp.o
Checkers: CMakeFiles/Checkers.dir/src/Moveable.cpp.o
Checkers: CMakeFiles/Checkers.dir/src/Player.cpp.o
Checkers: CMakeFiles/Checkers.dir/src/SoundManager.cpp.o
Checkers: CMakeFiles/Checkers.dir/src/Square.cpp.o
Checkers: CMakeFiles/Checkers.dir/build.make
Checkers: /usr/lib/x86_64-linux-gnu/libsfml-system.so
Checkers: /usr/lib/x86_64-linux-gnu/libsfml-window.so
Checkers: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so
Checkers: /usr/lib/x86_64-linux-gnu/libsfml-audio.so
Checkers: CMakeFiles/Checkers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable Checkers"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Checkers.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Checkers.dir/build: Checkers
.PHONY : CMakeFiles/Checkers.dir/build

CMakeFiles/Checkers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Checkers.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Checkers.dir/clean

CMakeFiles/Checkers.dir/depend:
	cd /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/cmake-build-debug /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/cmake-build-debug /home/nico/Escritorio/Proyecto2_Datos-II/checkers-master/cmake-build-debug/CMakeFiles/Checkers.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Checkers.dir/depend
