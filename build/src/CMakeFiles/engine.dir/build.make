# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /snap/cmake/599/bin/cmake

# The command to remove a file.
RM = /snap/cmake/599/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jjl119/Programming/Game_Programming/isometric_world

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jjl119/Programming/Game_Programming/isometric_world/build

# Include any dependencies generated for this target.
include src/CMakeFiles/engine.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/engine.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/engine.dir/flags.make

src/CMakeFiles/engine.dir/engine/graphics/Basic_Renderers.cpp.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/graphics/Basic_Renderers.cpp.o: ../src/engine/graphics/Basic_Renderers.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/engine.dir/engine/graphics/Basic_Renderers.cpp.o"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/graphics/Basic_Renderers.cpp.o -c /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/graphics/Basic_Renderers.cpp

src/CMakeFiles/engine.dir/engine/graphics/Basic_Renderers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/graphics/Basic_Renderers.cpp.i"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/graphics/Basic_Renderers.cpp > CMakeFiles/engine.dir/engine/graphics/Basic_Renderers.cpp.i

src/CMakeFiles/engine.dir/engine/graphics/Basic_Renderers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/graphics/Basic_Renderers.cpp.s"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/graphics/Basic_Renderers.cpp -o CMakeFiles/engine.dir/engine/graphics/Basic_Renderers.cpp.s

src/CMakeFiles/engine.dir/engine/graphics/camera.cpp.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/graphics/camera.cpp.o: ../src/engine/graphics/camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/engine.dir/engine/graphics/camera.cpp.o"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/graphics/camera.cpp.o -c /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/graphics/camera.cpp

src/CMakeFiles/engine.dir/engine/graphics/camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/graphics/camera.cpp.i"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/graphics/camera.cpp > CMakeFiles/engine.dir/engine/graphics/camera.cpp.i

src/CMakeFiles/engine.dir/engine/graphics/camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/graphics/camera.cpp.s"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/graphics/camera.cpp -o CMakeFiles/engine.dir/engine/graphics/camera.cpp.s

src/CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.o: ../src/engine/scene/base_objects/Grid.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.o"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.o -c /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/base_objects/Grid.cpp

src/CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.i"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/base_objects/Grid.cpp > CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.i

src/CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.s"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/base_objects/Grid.cpp -o CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.s

src/CMakeFiles/engine.dir/engine/scene/Map.cpp.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/scene/Map.cpp.o: ../src/engine/scene/Map.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/engine.dir/engine/scene/Map.cpp.o"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/scene/Map.cpp.o -c /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/Map.cpp

src/CMakeFiles/engine.dir/engine/scene/Map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/scene/Map.cpp.i"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/Map.cpp > CMakeFiles/engine.dir/engine/scene/Map.cpp.i

src/CMakeFiles/engine.dir/engine/scene/Map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/scene/Map.cpp.s"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/Map.cpp -o CMakeFiles/engine.dir/engine/scene/Map.cpp.s

src/CMakeFiles/engine.dir/engine/window/Window.cpp.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/window/Window.cpp.o: ../src/engine/window/Window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/engine.dir/engine/window/Window.cpp.o"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/window/Window.cpp.o -c /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/window/Window.cpp

src/CMakeFiles/engine.dir/engine/window/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/window/Window.cpp.i"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/window/Window.cpp > CMakeFiles/engine.dir/engine/window/Window.cpp.i

src/CMakeFiles/engine.dir/engine/window/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/window/Window.cpp.s"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/window/Window.cpp -o CMakeFiles/engine.dir/engine/window/Window.cpp.s

src/CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.o: ../src/engine/scene/base_objects/Game_Object_Interface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.o"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.o -c /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/base_objects/Game_Object_Interface.cpp

src/CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.i"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/base_objects/Game_Object_Interface.cpp > CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.i

src/CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.s"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jjl119/Programming/Game_Programming/isometric_world/src/engine/scene/base_objects/Game_Object_Interface.cpp -o CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.s

# Object files for target engine
engine_OBJECTS = \
"CMakeFiles/engine.dir/engine/graphics/Basic_Renderers.cpp.o" \
"CMakeFiles/engine.dir/engine/graphics/camera.cpp.o" \
"CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.o" \
"CMakeFiles/engine.dir/engine/scene/Map.cpp.o" \
"CMakeFiles/engine.dir/engine/window/Window.cpp.o" \
"CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.o"

# External object files for target engine
engine_EXTERNAL_OBJECTS =

src/libengine.a: src/CMakeFiles/engine.dir/engine/graphics/Basic_Renderers.cpp.o
src/libengine.a: src/CMakeFiles/engine.dir/engine/graphics/camera.cpp.o
src/libengine.a: src/CMakeFiles/engine.dir/engine/scene/base_objects/Grid.cpp.o
src/libengine.a: src/CMakeFiles/engine.dir/engine/scene/Map.cpp.o
src/libengine.a: src/CMakeFiles/engine.dir/engine/window/Window.cpp.o
src/libengine.a: src/CMakeFiles/engine.dir/engine/scene/base_objects/Game_Object_Interface.cpp.o
src/libengine.a: src/CMakeFiles/engine.dir/build.make
src/libengine.a: src/CMakeFiles/engine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jjl119/Programming/Game_Programming/isometric_world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library libengine.a"
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && $(CMAKE_COMMAND) -P CMakeFiles/engine.dir/cmake_clean_target.cmake
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/engine.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/engine.dir/build: src/libengine.a

.PHONY : src/CMakeFiles/engine.dir/build

src/CMakeFiles/engine.dir/clean:
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build/src && $(CMAKE_COMMAND) -P CMakeFiles/engine.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/engine.dir/clean

src/CMakeFiles/engine.dir/depend:
	cd /home/jjl119/Programming/Game_Programming/isometric_world/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jjl119/Programming/Game_Programming/isometric_world /home/jjl119/Programming/Game_Programming/isometric_world/src /home/jjl119/Programming/Game_Programming/isometric_world/build /home/jjl119/Programming/Game_Programming/isometric_world/build/src /home/jjl119/Programming/Game_Programming/isometric_world/build/src/CMakeFiles/engine.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/engine.dir/depend

