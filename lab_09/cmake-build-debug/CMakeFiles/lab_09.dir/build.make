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
CMAKE_SOURCE_DIR = /home/kamil/CLionProjects/PP2/lab_09

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kamil/CLionProjects/PP2/lab_09/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab_09.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab_09.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab_09.dir/flags.make

CMakeFiles/lab_09.dir/main.cpp.o: CMakeFiles/lab_09.dir/flags.make
CMakeFiles/lab_09.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/CLionProjects/PP2/lab_09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab_09.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab_09.dir/main.cpp.o -c /home/kamil/CLionProjects/PP2/lab_09/main.cpp

CMakeFiles/lab_09.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_09.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/CLionProjects/PP2/lab_09/main.cpp > CMakeFiles/lab_09.dir/main.cpp.i

CMakeFiles/lab_09.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_09.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/CLionProjects/PP2/lab_09/main.cpp -o CMakeFiles/lab_09.dir/main.cpp.s

CMakeFiles/lab_09.dir/Logger.cpp.o: CMakeFiles/lab_09.dir/flags.make
CMakeFiles/lab_09.dir/Logger.cpp.o: ../Logger.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/CLionProjects/PP2/lab_09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab_09.dir/Logger.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab_09.dir/Logger.cpp.o -c /home/kamil/CLionProjects/PP2/lab_09/Logger.cpp

CMakeFiles/lab_09.dir/Logger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_09.dir/Logger.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/CLionProjects/PP2/lab_09/Logger.cpp > CMakeFiles/lab_09.dir/Logger.cpp.i

CMakeFiles/lab_09.dir/Logger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_09.dir/Logger.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/CLionProjects/PP2/lab_09/Logger.cpp -o CMakeFiles/lab_09.dir/Logger.cpp.s

CMakeFiles/lab_09.dir/FileLogger.cpp.o: CMakeFiles/lab_09.dir/flags.make
CMakeFiles/lab_09.dir/FileLogger.cpp.o: ../FileLogger.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/CLionProjects/PP2/lab_09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab_09.dir/FileLogger.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab_09.dir/FileLogger.cpp.o -c /home/kamil/CLionProjects/PP2/lab_09/FileLogger.cpp

CMakeFiles/lab_09.dir/FileLogger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_09.dir/FileLogger.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/CLionProjects/PP2/lab_09/FileLogger.cpp > CMakeFiles/lab_09.dir/FileLogger.cpp.i

CMakeFiles/lab_09.dir/FileLogger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_09.dir/FileLogger.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/CLionProjects/PP2/lab_09/FileLogger.cpp -o CMakeFiles/lab_09.dir/FileLogger.cpp.s

CMakeFiles/lab_09.dir/ConsoleLogger.cpp.o: CMakeFiles/lab_09.dir/flags.make
CMakeFiles/lab_09.dir/ConsoleLogger.cpp.o: ../ConsoleLogger.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/CLionProjects/PP2/lab_09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lab_09.dir/ConsoleLogger.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab_09.dir/ConsoleLogger.cpp.o -c /home/kamil/CLionProjects/PP2/lab_09/ConsoleLogger.cpp

CMakeFiles/lab_09.dir/ConsoleLogger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_09.dir/ConsoleLogger.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/CLionProjects/PP2/lab_09/ConsoleLogger.cpp > CMakeFiles/lab_09.dir/ConsoleLogger.cpp.i

CMakeFiles/lab_09.dir/ConsoleLogger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_09.dir/ConsoleLogger.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/CLionProjects/PP2/lab_09/ConsoleLogger.cpp -o CMakeFiles/lab_09.dir/ConsoleLogger.cpp.s

CMakeFiles/lab_09.dir/DatabaseLogger.cpp.o: CMakeFiles/lab_09.dir/flags.make
CMakeFiles/lab_09.dir/DatabaseLogger.cpp.o: ../DatabaseLogger.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/CLionProjects/PP2/lab_09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/lab_09.dir/DatabaseLogger.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab_09.dir/DatabaseLogger.cpp.o -c /home/kamil/CLionProjects/PP2/lab_09/DatabaseLogger.cpp

CMakeFiles/lab_09.dir/DatabaseLogger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_09.dir/DatabaseLogger.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/CLionProjects/PP2/lab_09/DatabaseLogger.cpp > CMakeFiles/lab_09.dir/DatabaseLogger.cpp.i

CMakeFiles/lab_09.dir/DatabaseLogger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_09.dir/DatabaseLogger.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/CLionProjects/PP2/lab_09/DatabaseLogger.cpp -o CMakeFiles/lab_09.dir/DatabaseLogger.cpp.s

# Object files for target lab_09
lab_09_OBJECTS = \
"CMakeFiles/lab_09.dir/main.cpp.o" \
"CMakeFiles/lab_09.dir/Logger.cpp.o" \
"CMakeFiles/lab_09.dir/FileLogger.cpp.o" \
"CMakeFiles/lab_09.dir/ConsoleLogger.cpp.o" \
"CMakeFiles/lab_09.dir/DatabaseLogger.cpp.o"

# External object files for target lab_09
lab_09_EXTERNAL_OBJECTS =

lab_09: CMakeFiles/lab_09.dir/main.cpp.o
lab_09: CMakeFiles/lab_09.dir/Logger.cpp.o
lab_09: CMakeFiles/lab_09.dir/FileLogger.cpp.o
lab_09: CMakeFiles/lab_09.dir/ConsoleLogger.cpp.o
lab_09: CMakeFiles/lab_09.dir/DatabaseLogger.cpp.o
lab_09: CMakeFiles/lab_09.dir/build.make
lab_09: CMakeFiles/lab_09.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kamil/CLionProjects/PP2/lab_09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable lab_09"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab_09.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab_09.dir/build: lab_09

.PHONY : CMakeFiles/lab_09.dir/build

CMakeFiles/lab_09.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab_09.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab_09.dir/clean

CMakeFiles/lab_09.dir/depend:
	cd /home/kamil/CLionProjects/PP2/lab_09/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kamil/CLionProjects/PP2/lab_09 /home/kamil/CLionProjects/PP2/lab_09 /home/kamil/CLionProjects/PP2/lab_09/cmake-build-debug /home/kamil/CLionProjects/PP2/lab_09/cmake-build-debug /home/kamil/CLionProjects/PP2/lab_09/cmake-build-debug/CMakeFiles/lab_09.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab_09.dir/depend

