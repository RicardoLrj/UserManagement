# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Software\cmake-3.20.2-windows-x86_64\bin\cmake.exe

# The command to remove a file.
RM = D:\Software\cmake-3.20.2-windows-x86_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Work\UserManagement

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Work\UserManagement\build

# Include any dependencies generated for this target.
include CMakeFiles/UserManagement.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/UserManagement.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/UserManagement.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UserManagement.dir/flags.make

CMakeFiles/UserManagement.dir/main.cpp.obj: CMakeFiles/UserManagement.dir/flags.make
CMakeFiles/UserManagement.dir/main.cpp.obj: ../main.cpp
CMakeFiles/UserManagement.dir/main.cpp.obj: CMakeFiles/UserManagement.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Work\UserManagement\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/UserManagement.dir/main.cpp.obj"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/UserManagement.dir/main.cpp.obj -MF CMakeFiles\UserManagement.dir\main.cpp.obj.d -o CMakeFiles\UserManagement.dir\main.cpp.obj -c E:\Work\UserManagement\main.cpp

CMakeFiles/UserManagement.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UserManagement.dir/main.cpp.i"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Work\UserManagement\main.cpp > CMakeFiles\UserManagement.dir\main.cpp.i

CMakeFiles/UserManagement.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UserManagement.dir/main.cpp.s"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Work\UserManagement\main.cpp -o CMakeFiles\UserManagement.dir\main.cpp.s

# Object files for target UserManagement
UserManagement_OBJECTS = \
"CMakeFiles/UserManagement.dir/main.cpp.obj"

# External object files for target UserManagement
UserManagement_EXTERNAL_OBJECTS =

UserManagement.exe: CMakeFiles/UserManagement.dir/main.cpp.obj
UserManagement.exe: CMakeFiles/UserManagement.dir/build.make
UserManagement.exe: libmanagement.a
UserManagement.exe: CMakeFiles/UserManagement.dir/linklibs.rsp
UserManagement.exe: CMakeFiles/UserManagement.dir/objects1.rsp
UserManagement.exe: CMakeFiles/UserManagement.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Work\UserManagement\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable UserManagement.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\UserManagement.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UserManagement.dir/build: UserManagement.exe
.PHONY : CMakeFiles/UserManagement.dir/build

CMakeFiles/UserManagement.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\UserManagement.dir\cmake_clean.cmake
.PHONY : CMakeFiles/UserManagement.dir/clean

CMakeFiles/UserManagement.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Work\UserManagement E:\Work\UserManagement E:\Work\UserManagement\build E:\Work\UserManagement\build E:\Work\UserManagement\build\CMakeFiles\UserManagement.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/UserManagement.dir/depend
