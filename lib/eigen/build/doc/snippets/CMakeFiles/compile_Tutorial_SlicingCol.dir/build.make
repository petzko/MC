# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_SOURCE_DIR = /home/kenny/Documents/workspaces/C++/MC/lib/eigen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kenny/Documents/workspaces/C++/MC/lib/eigen/build

# Include any dependencies generated for this target.
include doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/depend.make

# Include the progress variables for this target.
include doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/progress.make

# Include the compile flags for this target's objects.
include doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/flags.make

doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.o: doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/flags.make
doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.o: doc/snippets/compile_Tutorial_SlicingCol.cpp
doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.o: ../doc/snippets/Tutorial_SlicingCol.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kenny/Documents/workspaces/C++/MC/lib/eigen/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.o"
	cd /home/kenny/Documents/workspaces/C++/MC/lib/eigen/build/doc/snippets && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.o -c /home/kenny/Documents/workspaces/C++/MC/lib/eigen/build/doc/snippets/compile_Tutorial_SlicingCol.cpp

doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.i"
	cd /home/kenny/Documents/workspaces/C++/MC/lib/eigen/build/doc/snippets && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kenny/Documents/workspaces/C++/MC/lib/eigen/build/doc/snippets/compile_Tutorial_SlicingCol.cpp > CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.i

doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.s"
	cd /home/kenny/Documents/workspaces/C++/MC/lib/eigen/build/doc/snippets && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kenny/Documents/workspaces/C++/MC/lib/eigen/build/doc/snippets/compile_Tutorial_SlicingCol.cpp -o CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.s

doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.o.requires:
.PHONY : doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.o.requires

doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.o.provides: doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.o.requires
	$(MAKE) -f doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/build.make doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.o.provides.build
.PHONY : doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.o.provides

doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.o.provides.build: doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.o

# Object files for target compile_Tutorial_SlicingCol
compile_Tutorial_SlicingCol_OBJECTS = \
"CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.o"

# External object files for target compile_Tutorial_SlicingCol
compile_Tutorial_SlicingCol_EXTERNAL_OBJECTS =

doc/snippets/compile_Tutorial_SlicingCol: doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.o
doc/snippets/compile_Tutorial_SlicingCol: doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/build.make
doc/snippets/compile_Tutorial_SlicingCol: doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable compile_Tutorial_SlicingCol"
	cd /home/kenny/Documents/workspaces/C++/MC/lib/eigen/build/doc/snippets && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/compile_Tutorial_SlicingCol.dir/link.txt --verbose=$(VERBOSE)
	cd /home/kenny/Documents/workspaces/C++/MC/lib/eigen/build/doc/snippets && ./compile_Tutorial_SlicingCol >/home/kenny/Documents/workspaces/C++/MC/lib/eigen/build/doc/snippets/Tutorial_SlicingCol.out

# Rule to build all files generated by this target.
doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/build: doc/snippets/compile_Tutorial_SlicingCol
.PHONY : doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/build

doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/requires: doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/compile_Tutorial_SlicingCol.cpp.o.requires
.PHONY : doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/requires

doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/clean:
	cd /home/kenny/Documents/workspaces/C++/MC/lib/eigen/build/doc/snippets && $(CMAKE_COMMAND) -P CMakeFiles/compile_Tutorial_SlicingCol.dir/cmake_clean.cmake
.PHONY : doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/clean

doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/depend:
	cd /home/kenny/Documents/workspaces/C++/MC/lib/eigen/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kenny/Documents/workspaces/C++/MC/lib/eigen /home/kenny/Documents/workspaces/C++/MC/lib/eigen/doc/snippets /home/kenny/Documents/workspaces/C++/MC/lib/eigen/build /home/kenny/Documents/workspaces/C++/MC/lib/eigen/build/doc/snippets /home/kenny/Documents/workspaces/C++/MC/lib/eigen/build/doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : doc/snippets/CMakeFiles/compile_Tutorial_SlicingCol.dir/depend

