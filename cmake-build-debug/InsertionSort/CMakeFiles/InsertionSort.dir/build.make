# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Softwares\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Softwares\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Workspace\Clion\DataStructure

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Workspace\Clion\DataStructure\cmake-build-debug

# Include any dependencies generated for this target.
include InsertionSort/CMakeFiles/InsertionSort.dir/depend.make

# Include the progress variables for this target.
include InsertionSort/CMakeFiles/InsertionSort.dir/progress.make

# Include the compile flags for this target's objects.
include InsertionSort/CMakeFiles/InsertionSort.dir/flags.make

InsertionSort/CMakeFiles/InsertionSort.dir/main.cpp.obj: InsertionSort/CMakeFiles/InsertionSort.dir/flags.make
InsertionSort/CMakeFiles/InsertionSort.dir/main.cpp.obj: ../InsertionSort/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Workspace\Clion\DataStructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object InsertionSort/CMakeFiles/InsertionSort.dir/main.cpp.obj"
	cd /d D:\Workspace\Clion\DataStructure\cmake-build-debug\InsertionSort && D:\Softwares\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\InsertionSort.dir\main.cpp.obj -c D:\Workspace\Clion\DataStructure\InsertionSort\main.cpp

InsertionSort/CMakeFiles/InsertionSort.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/InsertionSort.dir/main.cpp.i"
	cd /d D:\Workspace\Clion\DataStructure\cmake-build-debug\InsertionSort && D:\Softwares\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Workspace\Clion\DataStructure\InsertionSort\main.cpp > CMakeFiles\InsertionSort.dir\main.cpp.i

InsertionSort/CMakeFiles/InsertionSort.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/InsertionSort.dir/main.cpp.s"
	cd /d D:\Workspace\Clion\DataStructure\cmake-build-debug\InsertionSort && D:\Softwares\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Workspace\Clion\DataStructure\InsertionSort\main.cpp -o CMakeFiles\InsertionSort.dir\main.cpp.s

# Object files for target InsertionSort
InsertionSort_OBJECTS = \
"CMakeFiles/InsertionSort.dir/main.cpp.obj"

# External object files for target InsertionSort
InsertionSort_EXTERNAL_OBJECTS =

InsertionSort/InsertionSort.exe: InsertionSort/CMakeFiles/InsertionSort.dir/main.cpp.obj
InsertionSort/InsertionSort.exe: InsertionSort/CMakeFiles/InsertionSort.dir/build.make
InsertionSort/InsertionSort.exe: InsertionSort/CMakeFiles/InsertionSort.dir/linklibs.rsp
InsertionSort/InsertionSort.exe: InsertionSort/CMakeFiles/InsertionSort.dir/objects1.rsp
InsertionSort/InsertionSort.exe: InsertionSort/CMakeFiles/InsertionSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Workspace\Clion\DataStructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable InsertionSort.exe"
	cd /d D:\Workspace\Clion\DataStructure\cmake-build-debug\InsertionSort && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\InsertionSort.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
InsertionSort/CMakeFiles/InsertionSort.dir/build: InsertionSort/InsertionSort.exe

.PHONY : InsertionSort/CMakeFiles/InsertionSort.dir/build

InsertionSort/CMakeFiles/InsertionSort.dir/clean:
	cd /d D:\Workspace\Clion\DataStructure\cmake-build-debug\InsertionSort && $(CMAKE_COMMAND) -P CMakeFiles\InsertionSort.dir\cmake_clean.cmake
.PHONY : InsertionSort/CMakeFiles/InsertionSort.dir/clean

InsertionSort/CMakeFiles/InsertionSort.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Workspace\Clion\DataStructure D:\Workspace\Clion\DataStructure\InsertionSort D:\Workspace\Clion\DataStructure\cmake-build-debug D:\Workspace\Clion\DataStructure\cmake-build-debug\InsertionSort D:\Workspace\Clion\DataStructure\cmake-build-debug\InsertionSort\CMakeFiles\InsertionSort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : InsertionSort/CMakeFiles/InsertionSort.dir/depend

