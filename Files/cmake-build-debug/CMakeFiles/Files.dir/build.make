# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ohrf02\CLionProjects\C\Files

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ohrf02\CLionProjects\C\Files\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Files.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Files.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Files.dir/flags.make

CMakeFiles/Files.dir/main.c.obj: CMakeFiles/Files.dir/flags.make
CMakeFiles/Files.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ohrf02\CLionProjects\C\Files\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Files.dir/main.c.obj"
	C:\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Files.dir\main.c.obj   -c C:\Users\ohrf02\CLionProjects\C\Files\main.c

CMakeFiles/Files.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Files.dir/main.c.i"
	C:\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\ohrf02\CLionProjects\C\Files\main.c > CMakeFiles\Files.dir\main.c.i

CMakeFiles/Files.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Files.dir/main.c.s"
	C:\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\ohrf02\CLionProjects\C\Files\main.c -o CMakeFiles\Files.dir\main.c.s

CMakeFiles/Files.dir/main.c.obj.requires:

.PHONY : CMakeFiles/Files.dir/main.c.obj.requires

CMakeFiles/Files.dir/main.c.obj.provides: CMakeFiles/Files.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\Files.dir\build.make CMakeFiles/Files.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/Files.dir/main.c.obj.provides

CMakeFiles/Files.dir/main.c.obj.provides.build: CMakeFiles/Files.dir/main.c.obj


# Object files for target Files
Files_OBJECTS = \
"CMakeFiles/Files.dir/main.c.obj"

# External object files for target Files
Files_EXTERNAL_OBJECTS =

Files.exe: CMakeFiles/Files.dir/main.c.obj
Files.exe: CMakeFiles/Files.dir/build.make
Files.exe: CMakeFiles/Files.dir/linklibs.rsp
Files.exe: CMakeFiles/Files.dir/objects1.rsp
Files.exe: CMakeFiles/Files.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ohrf02\CLionProjects\C\Files\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Files.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Files.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Files.dir/build: Files.exe

.PHONY : CMakeFiles/Files.dir/build

CMakeFiles/Files.dir/requires: CMakeFiles/Files.dir/main.c.obj.requires

.PHONY : CMakeFiles/Files.dir/requires

CMakeFiles/Files.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Files.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Files.dir/clean

CMakeFiles/Files.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ohrf02\CLionProjects\C\Files C:\Users\ohrf02\CLionProjects\C\Files C:\Users\ohrf02\CLionProjects\C\Files\cmake-build-debug C:\Users\ohrf02\CLionProjects\C\Files\cmake-build-debug C:\Users\ohrf02\CLionProjects\C\Files\cmake-build-debug\CMakeFiles\Files.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Files.dir/depend

