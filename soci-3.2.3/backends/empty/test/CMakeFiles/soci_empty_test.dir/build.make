# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/gajos/QtProjects/IndustryLinker/soci-3.2.3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gajos/QtProjects/IndustryLinker/soci-3.2.3

# Include any dependencies generated for this target.
include backends/empty/test/CMakeFiles/soci_empty_test.dir/depend.make

# Include the progress variables for this target.
include backends/empty/test/CMakeFiles/soci_empty_test.dir/progress.make

# Include the compile flags for this target's objects.
include backends/empty/test/CMakeFiles/soci_empty_test.dir/flags.make

backends/empty/test/CMakeFiles/soci_empty_test.dir/test-empty.cpp.o: backends/empty/test/CMakeFiles/soci_empty_test.dir/flags.make
backends/empty/test/CMakeFiles/soci_empty_test.dir/test-empty.cpp.o: backends/empty/test/test-empty.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object backends/empty/test/CMakeFiles/soci_empty_test.dir/test-empty.cpp.o"
	cd /home/gajos/QtProjects/IndustryLinker/soci-3.2.3/backends/empty/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/soci_empty_test.dir/test-empty.cpp.o -c /home/gajos/QtProjects/IndustryLinker/soci-3.2.3/backends/empty/test/test-empty.cpp

backends/empty/test/CMakeFiles/soci_empty_test.dir/test-empty.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/soci_empty_test.dir/test-empty.cpp.i"
	cd /home/gajos/QtProjects/IndustryLinker/soci-3.2.3/backends/empty/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gajos/QtProjects/IndustryLinker/soci-3.2.3/backends/empty/test/test-empty.cpp > CMakeFiles/soci_empty_test.dir/test-empty.cpp.i

backends/empty/test/CMakeFiles/soci_empty_test.dir/test-empty.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/soci_empty_test.dir/test-empty.cpp.s"
	cd /home/gajos/QtProjects/IndustryLinker/soci-3.2.3/backends/empty/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gajos/QtProjects/IndustryLinker/soci-3.2.3/backends/empty/test/test-empty.cpp -o CMakeFiles/soci_empty_test.dir/test-empty.cpp.s

backends/empty/test/CMakeFiles/soci_empty_test.dir/test-empty.cpp.o.requires:

.PHONY : backends/empty/test/CMakeFiles/soci_empty_test.dir/test-empty.cpp.o.requires

backends/empty/test/CMakeFiles/soci_empty_test.dir/test-empty.cpp.o.provides: backends/empty/test/CMakeFiles/soci_empty_test.dir/test-empty.cpp.o.requires
	$(MAKE) -f backends/empty/test/CMakeFiles/soci_empty_test.dir/build.make backends/empty/test/CMakeFiles/soci_empty_test.dir/test-empty.cpp.o.provides.build
.PHONY : backends/empty/test/CMakeFiles/soci_empty_test.dir/test-empty.cpp.o.provides

backends/empty/test/CMakeFiles/soci_empty_test.dir/test-empty.cpp.o.provides.build: backends/empty/test/CMakeFiles/soci_empty_test.dir/test-empty.cpp.o


# Object files for target soci_empty_test
soci_empty_test_OBJECTS = \
"CMakeFiles/soci_empty_test.dir/test-empty.cpp.o"

# External object files for target soci_empty_test
soci_empty_test_EXTERNAL_OBJECTS =

bin/soci_empty_test: backends/empty/test/CMakeFiles/soci_empty_test.dir/test-empty.cpp.o
bin/soci_empty_test: backends/empty/test/CMakeFiles/soci_empty_test.dir/build.make
bin/soci_empty_test: lib/libsoci_empty.so.3.2.3
bin/soci_empty_test: /usr/local/boost_1_67_0/stage/lib/libboost_date_time.a
bin/soci_empty_test: lib/libsoci_core.so.3.2.3
bin/soci_empty_test: /usr/lib/x86_64-linux-gnu/libdl.so
bin/soci_empty_test: /usr/local/boost_1_67_0/stage/lib/libboost_date_time.a
bin/soci_empty_test: backends/empty/test/CMakeFiles/soci_empty_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gajos/QtProjects/IndustryLinker/soci-3.2.3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../bin/soci_empty_test"
	cd /home/gajos/QtProjects/IndustryLinker/soci-3.2.3/backends/empty/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/soci_empty_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
backends/empty/test/CMakeFiles/soci_empty_test.dir/build: bin/soci_empty_test

.PHONY : backends/empty/test/CMakeFiles/soci_empty_test.dir/build

backends/empty/test/CMakeFiles/soci_empty_test.dir/requires: backends/empty/test/CMakeFiles/soci_empty_test.dir/test-empty.cpp.o.requires

.PHONY : backends/empty/test/CMakeFiles/soci_empty_test.dir/requires

backends/empty/test/CMakeFiles/soci_empty_test.dir/clean:
	cd /home/gajos/QtProjects/IndustryLinker/soci-3.2.3/backends/empty/test && $(CMAKE_COMMAND) -P CMakeFiles/soci_empty_test.dir/cmake_clean.cmake
.PHONY : backends/empty/test/CMakeFiles/soci_empty_test.dir/clean

backends/empty/test/CMakeFiles/soci_empty_test.dir/depend:
	cd /home/gajos/QtProjects/IndustryLinker/soci-3.2.3 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gajos/QtProjects/IndustryLinker/soci-3.2.3 /home/gajos/QtProjects/IndustryLinker/soci-3.2.3/backends/empty/test /home/gajos/QtProjects/IndustryLinker/soci-3.2.3 /home/gajos/QtProjects/IndustryLinker/soci-3.2.3/backends/empty/test /home/gajos/QtProjects/IndustryLinker/soci-3.2.3/backends/empty/test/CMakeFiles/soci_empty_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : backends/empty/test/CMakeFiles/soci_empty_test.dir/depend

