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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/Game"

# Include any dependencies generated for this target.
include CMakeFiles/MyGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MyGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyGame.dir/flags.make

CMakeFiles/MyGame.dir/TextConsole/TextConsole.cpp.o: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/TextConsole/TextConsole.cpp.o: ../TextConsole/TextConsole.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/Game/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyGame.dir/TextConsole/TextConsole.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyGame.dir/TextConsole/TextConsole.cpp.o -c "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/TextConsole/TextConsole.cpp"

CMakeFiles/MyGame.dir/TextConsole/TextConsole.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyGame.dir/TextConsole/TextConsole.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/TextConsole/TextConsole.cpp" > CMakeFiles/MyGame.dir/TextConsole/TextConsole.cpp.i

CMakeFiles/MyGame.dir/TextConsole/TextConsole.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyGame.dir/TextConsole/TextConsole.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/TextConsole/TextConsole.cpp" -o CMakeFiles/MyGame.dir/TextConsole/TextConsole.cpp.s

CMakeFiles/MyGame.dir/MyGame.cpp.o: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/MyGame.cpp.o: MyGame.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/Game/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MyGame.dir/MyGame.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyGame.dir/MyGame.cpp.o -c "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/Game/MyGame.cpp"

CMakeFiles/MyGame.dir/MyGame.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyGame.dir/MyGame.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/Game/MyGame.cpp" > CMakeFiles/MyGame.dir/MyGame.cpp.i

CMakeFiles/MyGame.dir/MyGame.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyGame.dir/MyGame.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/Game/MyGame.cpp" -o CMakeFiles/MyGame.dir/MyGame.cpp.s

CMakeFiles/MyGame.dir/Main.cpp.o: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/Main.cpp.o: Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/Game/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/MyGame.dir/Main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyGame.dir/Main.cpp.o -c "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/Game/Main.cpp"

CMakeFiles/MyGame.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyGame.dir/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/Game/Main.cpp" > CMakeFiles/MyGame.dir/Main.cpp.i

CMakeFiles/MyGame.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyGame.dir/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/Game/Main.cpp" -o CMakeFiles/MyGame.dir/Main.cpp.s

# Object files for target MyGame
MyGame_OBJECTS = \
"CMakeFiles/MyGame.dir/TextConsole/TextConsole.cpp.o" \
"CMakeFiles/MyGame.dir/MyGame.cpp.o" \
"CMakeFiles/MyGame.dir/Main.cpp.o"

# External object files for target MyGame
MyGame_EXTERNAL_OBJECTS =

MyGame: CMakeFiles/MyGame.dir/TextConsole/TextConsole.cpp.o
MyGame: CMakeFiles/MyGame.dir/MyGame.cpp.o
MyGame: CMakeFiles/MyGame.dir/Main.cpp.o
MyGame: CMakeFiles/MyGame.dir/build.make
MyGame: /usr/lib/x86_64-linux-gnu/libSDL2.so
MyGame: CMakeFiles/MyGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/Game/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable MyGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyGame.dir/build: MyGame

.PHONY : CMakeFiles/MyGame.dir/build

CMakeFiles/MyGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyGame.dir/clean

CMakeFiles/MyGame.dir/depend:
	cd "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/Game" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template" "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template" "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/Game" "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/Game" "/home/siumauricio/Documentos/Programacion 3/Progra3_Game_Template/Game/CMakeFiles/MyGame.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/MyGame.dir/depend

