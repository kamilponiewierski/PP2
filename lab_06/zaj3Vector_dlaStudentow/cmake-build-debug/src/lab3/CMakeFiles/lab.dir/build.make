# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_COMMAND = /snap/clion/151/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/151/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug

# Include any dependencies generated for this target.
include src/lab3/CMakeFiles/lab.dir/depend.make

# Include the progress variables for this target.
include src/lab3/CMakeFiles/lab.dir/progress.make

# Include the compile flags for this target's objects.
include src/lab3/CMakeFiles/lab.dir/flags.make

src/lab3/CMakeFiles/lab.dir/fraction.cpp.o: src/lab3/CMakeFiles/lab.dir/flags.make
src/lab3/CMakeFiles/lab.dir/fraction.cpp.o: ../src/lab3/fraction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/lab3/CMakeFiles/lab.dir/fraction.cpp.o"
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab.dir/fraction.cpp.o -c /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/src/lab3/fraction.cpp

src/lab3/CMakeFiles/lab.dir/fraction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab.dir/fraction.cpp.i"
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/src/lab3/fraction.cpp > CMakeFiles/lab.dir/fraction.cpp.i

src/lab3/CMakeFiles/lab.dir/fraction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab.dir/fraction.cpp.s"
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/src/lab3/fraction.cpp -o CMakeFiles/lab.dir/fraction.cpp.s

src/lab3/CMakeFiles/lab.dir/fractionTests.cpp.o: src/lab3/CMakeFiles/lab.dir/flags.make
src/lab3/CMakeFiles/lab.dir/fractionTests.cpp.o: ../src/lab3/fractionTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/lab3/CMakeFiles/lab.dir/fractionTests.cpp.o"
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab.dir/fractionTests.cpp.o -c /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/src/lab3/fractionTests.cpp

src/lab3/CMakeFiles/lab.dir/fractionTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab.dir/fractionTests.cpp.i"
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/src/lab3/fractionTests.cpp > CMakeFiles/lab.dir/fractionTests.cpp.i

src/lab3/CMakeFiles/lab.dir/fractionTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab.dir/fractionTests.cpp.s"
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/src/lab3/fractionTests.cpp -o CMakeFiles/lab.dir/fractionTests.cpp.s

src/lab3/CMakeFiles/lab.dir/main.cpp.o: src/lab3/CMakeFiles/lab.dir/flags.make
src/lab3/CMakeFiles/lab.dir/main.cpp.o: ../src/lab3/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/lab3/CMakeFiles/lab.dir/main.cpp.o"
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab.dir/main.cpp.o -c /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/src/lab3/main.cpp

src/lab3/CMakeFiles/lab.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab.dir/main.cpp.i"
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/src/lab3/main.cpp > CMakeFiles/lab.dir/main.cpp.i

src/lab3/CMakeFiles/lab.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab.dir/main.cpp.s"
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/src/lab3/main.cpp -o CMakeFiles/lab.dir/main.cpp.s

src/lab3/CMakeFiles/lab.dir/vector.cpp.o: src/lab3/CMakeFiles/lab.dir/flags.make
src/lab3/CMakeFiles/lab.dir/vector.cpp.o: ../src/lab3/vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/lab3/CMakeFiles/lab.dir/vector.cpp.o"
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab.dir/vector.cpp.o -c /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/src/lab3/vector.cpp

src/lab3/CMakeFiles/lab.dir/vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab.dir/vector.cpp.i"
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/src/lab3/vector.cpp > CMakeFiles/lab.dir/vector.cpp.i

src/lab3/CMakeFiles/lab.dir/vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab.dir/vector.cpp.s"
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/src/lab3/vector.cpp -o CMakeFiles/lab.dir/vector.cpp.s

src/lab3/CMakeFiles/lab.dir/vectorTests.cpp.o: src/lab3/CMakeFiles/lab.dir/flags.make
src/lab3/CMakeFiles/lab.dir/vectorTests.cpp.o: ../src/lab3/vectorTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/lab3/CMakeFiles/lab.dir/vectorTests.cpp.o"
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab.dir/vectorTests.cpp.o -c /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/src/lab3/vectorTests.cpp

src/lab3/CMakeFiles/lab.dir/vectorTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab.dir/vectorTests.cpp.i"
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/src/lab3/vectorTests.cpp > CMakeFiles/lab.dir/vectorTests.cpp.i

src/lab3/CMakeFiles/lab.dir/vectorTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab.dir/vectorTests.cpp.s"
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/src/lab3/vectorTests.cpp -o CMakeFiles/lab.dir/vectorTests.cpp.s

# Object files for target lab
lab_OBJECTS = \
"CMakeFiles/lab.dir/fraction.cpp.o" \
"CMakeFiles/lab.dir/fractionTests.cpp.o" \
"CMakeFiles/lab.dir/main.cpp.o" \
"CMakeFiles/lab.dir/vector.cpp.o" \
"CMakeFiles/lab.dir/vectorTests.cpp.o"

# External object files for target lab
lab_EXTERNAL_OBJECTS =

bin/lab: src/lab3/CMakeFiles/lab.dir/fraction.cpp.o
bin/lab: src/lab3/CMakeFiles/lab.dir/fractionTests.cpp.o
bin/lab: src/lab3/CMakeFiles/lab.dir/main.cpp.o
bin/lab: src/lab3/CMakeFiles/lab.dir/vector.cpp.o
bin/lab: src/lab3/CMakeFiles/lab.dir/vectorTests.cpp.o
bin/lab: src/lab3/CMakeFiles/lab.dir/build.make
bin/lab: lib/libUtils.a
bin/lab: lib/libgtestd.a
bin/lab: src/lab3/CMakeFiles/lab.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ../../bin/lab"
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/lab3/CMakeFiles/lab.dir/build: bin/lab

.PHONY : src/lab3/CMakeFiles/lab.dir/build

src/lab3/CMakeFiles/lab.dir/clean:
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 && $(CMAKE_COMMAND) -P CMakeFiles/lab.dir/cmake_clean.cmake
.PHONY : src/lab3/CMakeFiles/lab.dir/clean

src/lab3/CMakeFiles/lab.dir/depend:
	cd /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/src/lab3 /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3 /home/kamil/CLionProjects/PP2/lab_06/zaj3Vector_dlaStudentow/cmake-build-debug/src/lab3/CMakeFiles/lab.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/lab3/CMakeFiles/lab.dir/depend

