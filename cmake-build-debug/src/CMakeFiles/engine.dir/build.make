# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /snap/clion/129/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/129/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jjl119/Programming/Game_Programming/isometric_world

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug

# Include any dependencies generated for this target.
include src/CMakeFiles/engine.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/engine.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/engine.dir/flags.make

src/CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.o: ../src/engine/scene/base_objects/Grid.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.o"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.o -c /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/base_objects/Grid.cpp

src/CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.i"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/base_objects/Grid.cpp > CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.i

src/CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.s"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/base_objects/Grid.cpp -o CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.s

src/CMakeFiles/engine.dir/engine/window/Window.cpp.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/window/Window.cpp.o: ../src/engine/window/Window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/engine.dir/engine/window/Window.cpp.o"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/window/Window.cpp.o -c /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/window/Window.cpp

src/CMakeFiles/engine.dir/engine/window/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/window/Window.cpp.i"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/window/Window.cpp > CMakeFiles/engine.dir/engine/window/Window.cpp.i

src/CMakeFiles/engine.dir/engine/window/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/window/Window.cpp.s"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/window/Window.cpp -o CMakeFiles/engine.dir/engine/window/Window.cpp.s

src/CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.o: ../src/engine/scene/base_objects/Game_Object_Interface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.o"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.o -c /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/base_objects/Game_Object_Interface.cpp

src/CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.i"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/base_objects/Game_Object_Interface.cpp > CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.i

src/CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.s"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/base_objects/Game_Object_Interface.cpp -o CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.s

src/CMakeFiles/engine.dir/engine/graphics/Interfaces.cpp.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/graphics/Interfaces.cpp.o: ../src/engine/graphics/Interfaces.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/engine.dir/engine/graphics/Interfaces.cpp.o"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/graphics/Interfaces.cpp.o -c /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/graphics/Interfaces.cpp

src/CMakeFiles/engine.dir/engine/graphics/Interfaces.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/graphics/Interfaces.cpp.i"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/graphics/Interfaces.cpp > CMakeFiles/engine.dir/engine/graphics/Interfaces.cpp.i

src/CMakeFiles/engine.dir/engine/graphics/Interfaces.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/graphics/Interfaces.cpp.s"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/graphics/Interfaces.cpp -o CMakeFiles/engine.dir/engine/graphics/Interfaces.cpp.s

src/CMakeFiles/engine.dir/engine/objects/Man/Man.cpp.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/objects/Man/Man.cpp.o: ../src/engine/objects/Man/Man.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/engine.dir/engine/objects/Man/Man.cpp.o"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/objects/Man/Man.cpp.o -c /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/objects/Man/Man.cpp

src/CMakeFiles/engine.dir/engine/objects/Man/Man.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/objects/Man/Man.cpp.i"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/objects/Man/Man.cpp > CMakeFiles/engine.dir/engine/objects/Man/Man.cpp.i

src/CMakeFiles/engine.dir/engine/objects/Man/Man.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/objects/Man/Man.cpp.s"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/objects/Man/Man.cpp -o CMakeFiles/engine.dir/engine/objects/Man/Man.cpp.s

src/CMakeFiles/engine.dir/engine/graphics/Textures.cpp.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/graphics/Textures.cpp.o: ../src/engine/graphics/Textures.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/engine.dir/engine/graphics/Textures.cpp.o"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/graphics/Textures.cpp.o -c /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/graphics/Textures.cpp

src/CMakeFiles/engine.dir/engine/graphics/Textures.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/graphics/Textures.cpp.i"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/graphics/Textures.cpp > CMakeFiles/engine.dir/engine/graphics/Textures.cpp.i

src/CMakeFiles/engine.dir/engine/graphics/Textures.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/graphics/Textures.cpp.s"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/graphics/Textures.cpp -o CMakeFiles/engine.dir/engine/graphics/Textures.cpp.s

src/CMakeFiles/engine.dir/engine/Game.cpp.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/Game.cpp.o: ../src/engine/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/engine.dir/engine/Game.cpp.o"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/Game.cpp.o -c /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/Game.cpp

src/CMakeFiles/engine.dir/engine/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/Game.cpp.i"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/Game.cpp > CMakeFiles/engine.dir/engine/Game.cpp.i

src/CMakeFiles/engine.dir/engine/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/Game.cpp.s"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/Game.cpp -o CMakeFiles/engine.dir/engine/Game.cpp.s

src/CMakeFiles/engine.dir/engine/scene/Scene.cpp.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/scene/Scene.cpp.o: ../src/engine/scene/Scene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/engine.dir/engine/scene/Scene.cpp.o"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/scene/Scene.cpp.o -c /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/Scene.cpp

src/CMakeFiles/engine.dir/engine/scene/Scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/scene/Scene.cpp.i"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/Scene.cpp > CMakeFiles/engine.dir/engine/scene/Scene.cpp.i

src/CMakeFiles/engine.dir/engine/scene/Scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/scene/Scene.cpp.s"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/Scene.cpp -o CMakeFiles/engine.dir/engine/scene/Scene.cpp.s

src/CMakeFiles/engine.dir/engine/scene/Camera.cpp.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/scene/Camera.cpp.o: ../src/engine/scene/Camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/CMakeFiles/engine.dir/engine/scene/Camera.cpp.o"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/scene/Camera.cpp.o -c /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/Camera.cpp

src/CMakeFiles/engine.dir/engine/scene/Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/scene/Camera.cpp.i"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/Camera.cpp > CMakeFiles/engine.dir/engine/scene/Camera.cpp.i

src/CMakeFiles/engine.dir/engine/scene/Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/scene/Camera.cpp.s"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/Camera.cpp -o CMakeFiles/engine.dir/engine/scene/Camera.cpp.s

src/CMakeFiles/engine.dir/Testing_Utilities.cpp.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/Testing_Utilities.cpp.o: ../src/Testing_Utilities.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/CMakeFiles/engine.dir/Testing_Utilities.cpp.o"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/Testing_Utilities.cpp.o -c /home/jjl119/Programming/Game_Programming/isometric_world/src/Testing_Utilities.cpp

src/CMakeFiles/engine.dir/Testing_Utilities.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/Testing_Utilities.cpp.i"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjl119/Programming/Game_Programming/isometric_world/src/Testing_Utilities.cpp > CMakeFiles/engine.dir/Testing_Utilities.cpp.i

src/CMakeFiles/engine.dir/Testing_Utilities.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/Testing_Utilities.cpp.s"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && /usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjl119/Programming/Game_Programming/isometric_world/src/Testing_Utilities.cpp -o CMakeFiles/engine.dir/Testing_Utilities.cpp.s

# Object files for target engine
engine_OBJECTS = \
"CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.o" \
"CMakeFiles/engine.dir/engine/window/Window.cpp.o" \
"CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.o" \
"CMakeFiles/engine.dir/engine/graphics/Interfaces.cpp.o" \
"CMakeFiles/engine.dir/engine/objects/Man/Man.cpp.o" \
"CMakeFiles/engine.dir/engine/graphics/Textures.cpp.o" \
"CMakeFiles/engine.dir/engine/Game.cpp.o" \
"CMakeFiles/engine.dir/engine/scene/Scene.cpp.o" \
"CMakeFiles/engine.dir/engine/scene/Camera.cpp.o" \
"CMakeFiles/engine.dir/Testing_Utilities.cpp.o"

# External object files for target engine
engine_EXTERNAL_OBJECTS =

src/libengine.a: src/CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.o
src/libengine.a: src/CMakeFiles/engine.dir/engine/window/Window.cpp.o
src/libengine.a: src/CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.o
src/libengine.a: src/CMakeFiles/engine.dir/engine/graphics/Interfaces.cpp.o
src/libengine.a: src/CMakeFiles/engine.dir/engine/objects/Man/Man.cpp.o
src/libengine.a: src/CMakeFiles/engine.dir/engine/graphics/Textures.cpp.o
src/libengine.a: src/CMakeFiles/engine.dir/engine/Game.cpp.o
src/libengine.a: src/CMakeFiles/engine.dir/engine/scene/Scene.cpp.o
src/libengine.a: src/CMakeFiles/engine.dir/engine/scene/Camera.cpp.o
src/libengine.a: src/CMakeFiles/engine.dir/Testing_Utilities.cpp.o
src/libengine.a: src/CMakeFiles/engine.dir/build.make
src/libengine.a: src/CMakeFiles/engine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX static library libengine.a"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && $(CMAKE_COMMAND) -P CMakeFiles/engine.dir/cmake_clean_target.cmake
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/engine.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/engine.dir/build: src/libengine.a

.PHONY : src/CMakeFiles/engine.dir/build

src/CMakeFiles/engine.dir/clean:
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src && $(CMAKE_COMMAND) -P CMakeFiles/engine.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/engine.dir/clean

src/CMakeFiles/engine.dir/depend:
	cd /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jjl119/Programming/Game_Programming/isometric_world /home/jjl119/Programming/Game_Programming/isometric_world/src /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src /home/jjl119/Programming/Game_Programming/isometric_world/cmake-build-debug/src/CMakeFiles/engine.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/engine.dir/depend

