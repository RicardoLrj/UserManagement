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
include CMakeFiles/management.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/management.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/management.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/management.dir/flags.make

CMakeFiles/management.dir/Management.cpp.obj: CMakeFiles/management.dir/flags.make
CMakeFiles/management.dir/Management.cpp.obj: ../Management.cpp
CMakeFiles/management.dir/Management.cpp.obj: CMakeFiles/management.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Work\UserManagement\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/management.dir/Management.cpp.obj"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/management.dir/Management.cpp.obj -MF CMakeFiles\management.dir\Management.cpp.obj.d -o CMakeFiles\management.dir\Management.cpp.obj -c E:\Work\UserManagement\Management.cpp

CMakeFiles/management.dir/Management.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/management.dir/Management.cpp.i"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Work\UserManagement\Management.cpp > CMakeFiles\management.dir\Management.cpp.i

CMakeFiles/management.dir/Management.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/management.dir/Management.cpp.s"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Work\UserManagement\Management.cpp -o CMakeFiles\management.dir\Management.cpp.s

CMakeFiles/management.dir/worker.cpp.obj: CMakeFiles/management.dir/flags.make
CMakeFiles/management.dir/worker.cpp.obj: ../worker.cpp
CMakeFiles/management.dir/worker.cpp.obj: CMakeFiles/management.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Work\UserManagement\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/management.dir/worker.cpp.obj"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/management.dir/worker.cpp.obj -MF CMakeFiles\management.dir\worker.cpp.obj.d -o CMakeFiles\management.dir\worker.cpp.obj -c E:\Work\UserManagement\worker.cpp

CMakeFiles/management.dir/worker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/management.dir/worker.cpp.i"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Work\UserManagement\worker.cpp > CMakeFiles\management.dir\worker.cpp.i

CMakeFiles/management.dir/worker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/management.dir/worker.cpp.s"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Work\UserManagement\worker.cpp -o CMakeFiles\management.dir\worker.cpp.s

CMakeFiles/management.dir/employee.cpp.obj: CMakeFiles/management.dir/flags.make
CMakeFiles/management.dir/employee.cpp.obj: ../employee.cpp
CMakeFiles/management.dir/employee.cpp.obj: CMakeFiles/management.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Work\UserManagement\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/management.dir/employee.cpp.obj"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/management.dir/employee.cpp.obj -MF CMakeFiles\management.dir\employee.cpp.obj.d -o CMakeFiles\management.dir\employee.cpp.obj -c E:\Work\UserManagement\employee.cpp

CMakeFiles/management.dir/employee.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/management.dir/employee.cpp.i"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Work\UserManagement\employee.cpp > CMakeFiles\management.dir\employee.cpp.i

CMakeFiles/management.dir/employee.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/management.dir/employee.cpp.s"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Work\UserManagement\employee.cpp -o CMakeFiles\management.dir\employee.cpp.s

CMakeFiles/management.dir/manager.cpp.obj: CMakeFiles/management.dir/flags.make
CMakeFiles/management.dir/manager.cpp.obj: ../manager.cpp
CMakeFiles/management.dir/manager.cpp.obj: CMakeFiles/management.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Work\UserManagement\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/management.dir/manager.cpp.obj"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/management.dir/manager.cpp.obj -MF CMakeFiles\management.dir\manager.cpp.obj.d -o CMakeFiles\management.dir\manager.cpp.obj -c E:\Work\UserManagement\manager.cpp

CMakeFiles/management.dir/manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/management.dir/manager.cpp.i"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Work\UserManagement\manager.cpp > CMakeFiles\management.dir\manager.cpp.i

CMakeFiles/management.dir/manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/management.dir/manager.cpp.s"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Work\UserManagement\manager.cpp -o CMakeFiles\management.dir\manager.cpp.s

CMakeFiles/management.dir/boss.cpp.obj: CMakeFiles/management.dir/flags.make
CMakeFiles/management.dir/boss.cpp.obj: ../boss.cpp
CMakeFiles/management.dir/boss.cpp.obj: CMakeFiles/management.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Work\UserManagement\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/management.dir/boss.cpp.obj"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/management.dir/boss.cpp.obj -MF CMakeFiles\management.dir\boss.cpp.obj.d -o CMakeFiles\management.dir\boss.cpp.obj -c E:\Work\UserManagement\boss.cpp

CMakeFiles/management.dir/boss.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/management.dir/boss.cpp.i"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Work\UserManagement\boss.cpp > CMakeFiles\management.dir\boss.cpp.i

CMakeFiles/management.dir/boss.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/management.dir/boss.cpp.s"
	D:\Softwaremingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Work\UserManagement\boss.cpp -o CMakeFiles\management.dir\boss.cpp.s

# Object files for target management
management_OBJECTS = \
"CMakeFiles/management.dir/Management.cpp.obj" \
"CMakeFiles/management.dir/worker.cpp.obj" \
"CMakeFiles/management.dir/employee.cpp.obj" \
"CMakeFiles/management.dir/manager.cpp.obj" \
"CMakeFiles/management.dir/boss.cpp.obj"

# External object files for target management
management_EXTERNAL_OBJECTS =

libmanagement.a: CMakeFiles/management.dir/Management.cpp.obj
libmanagement.a: CMakeFiles/management.dir/worker.cpp.obj
libmanagement.a: CMakeFiles/management.dir/employee.cpp.obj
libmanagement.a: CMakeFiles/management.dir/manager.cpp.obj
libmanagement.a: CMakeFiles/management.dir/boss.cpp.obj
libmanagement.a: CMakeFiles/management.dir/build.make
libmanagement.a: CMakeFiles/management.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Work\UserManagement\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libmanagement.a"
	$(CMAKE_COMMAND) -P CMakeFiles\management.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\management.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/management.dir/build: libmanagement.a
.PHONY : CMakeFiles/management.dir/build

CMakeFiles/management.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\management.dir\cmake_clean.cmake
.PHONY : CMakeFiles/management.dir/clean

CMakeFiles/management.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Work\UserManagement E:\Work\UserManagement E:\Work\UserManagement\build E:\Work\UserManagement\build E:\Work\UserManagement\build\CMakeFiles\management.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/management.dir/depend

