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
CMAKE_SOURCE_DIR = "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/build"

# Include any dependencies generated for this target.
include CMakeFiles/Drawable.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Drawable.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Drawable.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Drawable.dir/flags.make

CMakeFiles/Drawable.dir/src/Circle.cpp.o: CMakeFiles/Drawable.dir/flags.make
CMakeFiles/Drawable.dir/src/Circle.cpp.o: ../src/Circle.cpp
CMakeFiles/Drawable.dir/src/Circle.cpp.o: CMakeFiles/Drawable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Drawable.dir/src/Circle.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Drawable.dir/src/Circle.cpp.o -MF CMakeFiles/Drawable.dir/src/Circle.cpp.o.d -o CMakeFiles/Drawable.dir/src/Circle.cpp.o -c "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/src/Circle.cpp"

CMakeFiles/Drawable.dir/src/Circle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drawable.dir/src/Circle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/src/Circle.cpp" > CMakeFiles/Drawable.dir/src/Circle.cpp.i

CMakeFiles/Drawable.dir/src/Circle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drawable.dir/src/Circle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/src/Circle.cpp" -o CMakeFiles/Drawable.dir/src/Circle.cpp.s

CMakeFiles/Drawable.dir/src/Drawable.cpp.o: CMakeFiles/Drawable.dir/flags.make
CMakeFiles/Drawable.dir/src/Drawable.cpp.o: ../src/Drawable.cpp
CMakeFiles/Drawable.dir/src/Drawable.cpp.o: CMakeFiles/Drawable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Drawable.dir/src/Drawable.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Drawable.dir/src/Drawable.cpp.o -MF CMakeFiles/Drawable.dir/src/Drawable.cpp.o.d -o CMakeFiles/Drawable.dir/src/Drawable.cpp.o -c "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/src/Drawable.cpp"

CMakeFiles/Drawable.dir/src/Drawable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drawable.dir/src/Drawable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/src/Drawable.cpp" > CMakeFiles/Drawable.dir/src/Drawable.cpp.i

CMakeFiles/Drawable.dir/src/Drawable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drawable.dir/src/Drawable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/src/Drawable.cpp" -o CMakeFiles/Drawable.dir/src/Drawable.cpp.s

CMakeFiles/Drawable.dir/src/Point.cpp.o: CMakeFiles/Drawable.dir/flags.make
CMakeFiles/Drawable.dir/src/Point.cpp.o: ../src/Point.cpp
CMakeFiles/Drawable.dir/src/Point.cpp.o: CMakeFiles/Drawable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Drawable.dir/src/Point.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Drawable.dir/src/Point.cpp.o -MF CMakeFiles/Drawable.dir/src/Point.cpp.o.d -o CMakeFiles/Drawable.dir/src/Point.cpp.o -c "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/src/Point.cpp"

CMakeFiles/Drawable.dir/src/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drawable.dir/src/Point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/src/Point.cpp" > CMakeFiles/Drawable.dir/src/Point.cpp.i

CMakeFiles/Drawable.dir/src/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drawable.dir/src/Point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/src/Point.cpp" -o CMakeFiles/Drawable.dir/src/Point.cpp.s

CMakeFiles/Drawable.dir/src/Rectangle.cpp.o: CMakeFiles/Drawable.dir/flags.make
CMakeFiles/Drawable.dir/src/Rectangle.cpp.o: ../src/Rectangle.cpp
CMakeFiles/Drawable.dir/src/Rectangle.cpp.o: CMakeFiles/Drawable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Drawable.dir/src/Rectangle.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Drawable.dir/src/Rectangle.cpp.o -MF CMakeFiles/Drawable.dir/src/Rectangle.cpp.o.d -o CMakeFiles/Drawable.dir/src/Rectangle.cpp.o -c "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/src/Rectangle.cpp"

CMakeFiles/Drawable.dir/src/Rectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drawable.dir/src/Rectangle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/src/Rectangle.cpp" > CMakeFiles/Drawable.dir/src/Rectangle.cpp.i

CMakeFiles/Drawable.dir/src/Rectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drawable.dir/src/Rectangle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/src/Rectangle.cpp" -o CMakeFiles/Drawable.dir/src/Rectangle.cpp.s

CMakeFiles/Drawable.dir/src/Triabgle.cpp.o: CMakeFiles/Drawable.dir/flags.make
CMakeFiles/Drawable.dir/src/Triabgle.cpp.o: ../src/Triabgle.cpp
CMakeFiles/Drawable.dir/src/Triabgle.cpp.o: CMakeFiles/Drawable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Drawable.dir/src/Triabgle.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Drawable.dir/src/Triabgle.cpp.o -MF CMakeFiles/Drawable.dir/src/Triabgle.cpp.o.d -o CMakeFiles/Drawable.dir/src/Triabgle.cpp.o -c "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/src/Triabgle.cpp"

CMakeFiles/Drawable.dir/src/Triabgle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drawable.dir/src/Triabgle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/src/Triabgle.cpp" > CMakeFiles/Drawable.dir/src/Triabgle.cpp.i

CMakeFiles/Drawable.dir/src/Triabgle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drawable.dir/src/Triabgle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/src/Triabgle.cpp" -o CMakeFiles/Drawable.dir/src/Triabgle.cpp.s

# Object files for target Drawable
Drawable_OBJECTS = \
"CMakeFiles/Drawable.dir/src/Circle.cpp.o" \
"CMakeFiles/Drawable.dir/src/Drawable.cpp.o" \
"CMakeFiles/Drawable.dir/src/Point.cpp.o" \
"CMakeFiles/Drawable.dir/src/Rectangle.cpp.o" \
"CMakeFiles/Drawable.dir/src/Triabgle.cpp.o"

# External object files for target Drawable
Drawable_EXTERNAL_OBJECTS =

libDrawable.so: CMakeFiles/Drawable.dir/src/Circle.cpp.o
libDrawable.so: CMakeFiles/Drawable.dir/src/Drawable.cpp.o
libDrawable.so: CMakeFiles/Drawable.dir/src/Point.cpp.o
libDrawable.so: CMakeFiles/Drawable.dir/src/Rectangle.cpp.o
libDrawable.so: CMakeFiles/Drawable.dir/src/Triabgle.cpp.o
libDrawable.so: CMakeFiles/Drawable.dir/build.make
libDrawable.so: CMakeFiles/Drawable.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library libDrawable.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Drawable.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Drawable.dir/build: libDrawable.so
.PHONY : CMakeFiles/Drawable.dir/build

CMakeFiles/Drawable.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Drawable.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Drawable.dir/clean

CMakeFiles/Drawable.dir/depend:
	cd "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib" "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib" "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/build" "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/build" "/home/abdullah/Desktop/embedded linux/3-Linux/Lec2_InitProcess/shared_lib/lib/build/CMakeFiles/Drawable.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Drawable.dir/depend
