# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/lab/Vo-Vy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lab/Vo-Vy

# Include any dependencies generated for this target.
include CMakeFiles/vo-vy.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/vo-vy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vo-vy.dir/flags.make

CMakeFiles/vo-vy.dir/vo-vy.cpp.o: CMakeFiles/vo-vy.dir/flags.make
CMakeFiles/vo-vy.dir/vo-vy.cpp.o: vo-vy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lab/Vo-Vy/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vo-vy.dir/vo-vy.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vo-vy.dir/vo-vy.cpp.o -c /home/lab/Vo-Vy/vo-vy.cpp

CMakeFiles/vo-vy.dir/vo-vy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vo-vy.dir/vo-vy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lab/Vo-Vy/vo-vy.cpp > CMakeFiles/vo-vy.dir/vo-vy.cpp.i

CMakeFiles/vo-vy.dir/vo-vy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vo-vy.dir/vo-vy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lab/Vo-Vy/vo-vy.cpp -o CMakeFiles/vo-vy.dir/vo-vy.cpp.s

CMakeFiles/vo-vy.dir/vo-vy.cpp.o.requires:

.PHONY : CMakeFiles/vo-vy.dir/vo-vy.cpp.o.requires

CMakeFiles/vo-vy.dir/vo-vy.cpp.o.provides: CMakeFiles/vo-vy.dir/vo-vy.cpp.o.requires
	$(MAKE) -f CMakeFiles/vo-vy.dir/build.make CMakeFiles/vo-vy.dir/vo-vy.cpp.o.provides.build
.PHONY : CMakeFiles/vo-vy.dir/vo-vy.cpp.o.provides

CMakeFiles/vo-vy.dir/vo-vy.cpp.o.provides.build: CMakeFiles/vo-vy.dir/vo-vy.cpp.o


# Object files for target vo-vy
vo__vy_OBJECTS = \
"CMakeFiles/vo-vy.dir/vo-vy.cpp.o"

# External object files for target vo-vy
vo__vy_EXTERNAL_OBJECTS =

vo-vy: CMakeFiles/vo-vy.dir/vo-vy.cpp.o
vo-vy: CMakeFiles/vo-vy.dir/build.make
vo-vy: CMakeFiles/vo-vy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lab/Vo-Vy/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vo-vy"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vo-vy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vo-vy.dir/build: vo-vy

.PHONY : CMakeFiles/vo-vy.dir/build

CMakeFiles/vo-vy.dir/requires: CMakeFiles/vo-vy.dir/vo-vy.cpp.o.requires

.PHONY : CMakeFiles/vo-vy.dir/requires

CMakeFiles/vo-vy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vo-vy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vo-vy.dir/clean

CMakeFiles/vo-vy.dir/depend:
	cd /home/lab/Vo-Vy && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lab/Vo-Vy /home/lab/Vo-Vy /home/lab/Vo-Vy /home/lab/Vo-Vy /home/lab/Vo-Vy/CMakeFiles/vo-vy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vo-vy.dir/depend
