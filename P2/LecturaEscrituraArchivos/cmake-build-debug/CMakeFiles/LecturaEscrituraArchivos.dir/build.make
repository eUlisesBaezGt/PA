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
CMAKE_COMMAND = /home/eubgt/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/213.7172.20/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/eubgt/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/213.7172.20/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/eubgt/Desktop/PA/P2/LecturaEscrituraArchivos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eubgt/Desktop/PA/P2/LecturaEscrituraArchivos/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LecturaEscrituraArchivos.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LecturaEscrituraArchivos.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LecturaEscrituraArchivos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LecturaEscrituraArchivos.dir/flags.make

CMakeFiles/LecturaEscrituraArchivos.dir/main.cpp.o: CMakeFiles/LecturaEscrituraArchivos.dir/flags.make
CMakeFiles/LecturaEscrituraArchivos.dir/main.cpp.o: ../main.cpp
CMakeFiles/LecturaEscrituraArchivos.dir/main.cpp.o: CMakeFiles/LecturaEscrituraArchivos.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eubgt/Desktop/PA/P2/LecturaEscrituraArchivos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LecturaEscrituraArchivos.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LecturaEscrituraArchivos.dir/main.cpp.o -MF CMakeFiles/LecturaEscrituraArchivos.dir/main.cpp.o.d -o CMakeFiles/LecturaEscrituraArchivos.dir/main.cpp.o -c /home/eubgt/Desktop/PA/P2/LecturaEscrituraArchivos/main.cpp

CMakeFiles/LecturaEscrituraArchivos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LecturaEscrituraArchivos.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eubgt/Desktop/PA/P2/LecturaEscrituraArchivos/main.cpp > CMakeFiles/LecturaEscrituraArchivos.dir/main.cpp.i

CMakeFiles/LecturaEscrituraArchivos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LecturaEscrituraArchivos.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eubgt/Desktop/PA/P2/LecturaEscrituraArchivos/main.cpp -o CMakeFiles/LecturaEscrituraArchivos.dir/main.cpp.s

# Object files for target LecturaEscrituraArchivos
LecturaEscrituraArchivos_OBJECTS = \
"CMakeFiles/LecturaEscrituraArchivos.dir/main.cpp.o"

# External object files for target LecturaEscrituraArchivos
LecturaEscrituraArchivos_EXTERNAL_OBJECTS =

LecturaEscrituraArchivos: CMakeFiles/LecturaEscrituraArchivos.dir/main.cpp.o
LecturaEscrituraArchivos: CMakeFiles/LecturaEscrituraArchivos.dir/build.make
LecturaEscrituraArchivos: CMakeFiles/LecturaEscrituraArchivos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eubgt/Desktop/PA/P2/LecturaEscrituraArchivos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LecturaEscrituraArchivos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LecturaEscrituraArchivos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LecturaEscrituraArchivos.dir/build: LecturaEscrituraArchivos
.PHONY : CMakeFiles/LecturaEscrituraArchivos.dir/build

CMakeFiles/LecturaEscrituraArchivos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LecturaEscrituraArchivos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LecturaEscrituraArchivos.dir/clean

CMakeFiles/LecturaEscrituraArchivos.dir/depend:
	cd /home/eubgt/Desktop/PA/P2/LecturaEscrituraArchivos/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eubgt/Desktop/PA/P2/LecturaEscrituraArchivos /home/eubgt/Desktop/PA/P2/LecturaEscrituraArchivos /home/eubgt/Desktop/PA/P2/LecturaEscrituraArchivos/cmake-build-debug /home/eubgt/Desktop/PA/P2/LecturaEscrituraArchivos/cmake-build-debug /home/eubgt/Desktop/PA/P2/LecturaEscrituraArchivos/cmake-build-debug/CMakeFiles/LecturaEscrituraArchivos.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LecturaEscrituraArchivos.dir/depend

