# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 4.0

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\matro\Downloads\PiAAGrafy25\PiAAGrafy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\matro\Downloads\PiAAGrafy25\PiAAGrafy\build

# Include any dependencies generated for this target.
include CMakeFiles/graph_algorithms_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/graph_algorithms_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/graph_algorithms_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/graph_algorithms_lib.dir/flags.make

CMakeFiles/graph_algorithms_lib.dir/codegen:
.PHONY : CMakeFiles/graph_algorithms_lib.dir/codegen

CMakeFiles/graph_algorithms_lib.dir/src/adjacency_list_graph.cpp.obj: CMakeFiles/graph_algorithms_lib.dir/flags.make
CMakeFiles/graph_algorithms_lib.dir/src/adjacency_list_graph.cpp.obj: CMakeFiles/graph_algorithms_lib.dir/includes_CXX.rsp
CMakeFiles/graph_algorithms_lib.dir/src/adjacency_list_graph.cpp.obj: C:/Users/matro/Downloads/PiAAGrafy25/PiAAGrafy/src/adjacency_list_graph.cpp
CMakeFiles/graph_algorithms_lib.dir/src/adjacency_list_graph.cpp.obj: CMakeFiles/graph_algorithms_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\matro\Downloads\PiAAGrafy25\PiAAGrafy\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/graph_algorithms_lib.dir/src/adjacency_list_graph.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/graph_algorithms_lib.dir/src/adjacency_list_graph.cpp.obj -MF CMakeFiles\graph_algorithms_lib.dir\src\adjacency_list_graph.cpp.obj.d -o CMakeFiles\graph_algorithms_lib.dir\src\adjacency_list_graph.cpp.obj -c C:\Users\matro\Downloads\PiAAGrafy25\PiAAGrafy\src\adjacency_list_graph.cpp

CMakeFiles/graph_algorithms_lib.dir/src/adjacency_list_graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/graph_algorithms_lib.dir/src/adjacency_list_graph.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\matro\Downloads\PiAAGrafy25\PiAAGrafy\src\adjacency_list_graph.cpp > CMakeFiles\graph_algorithms_lib.dir\src\adjacency_list_graph.cpp.i

CMakeFiles/graph_algorithms_lib.dir/src/adjacency_list_graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/graph_algorithms_lib.dir/src/adjacency_list_graph.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\matro\Downloads\PiAAGrafy25\PiAAGrafy\src\adjacency_list_graph.cpp -o CMakeFiles\graph_algorithms_lib.dir\src\adjacency_list_graph.cpp.s

CMakeFiles/graph_algorithms_lib.dir/src/adjacency_matrix_graph.cpp.obj: CMakeFiles/graph_algorithms_lib.dir/flags.make
CMakeFiles/graph_algorithms_lib.dir/src/adjacency_matrix_graph.cpp.obj: CMakeFiles/graph_algorithms_lib.dir/includes_CXX.rsp
CMakeFiles/graph_algorithms_lib.dir/src/adjacency_matrix_graph.cpp.obj: C:/Users/matro/Downloads/PiAAGrafy25/PiAAGrafy/src/adjacency_matrix_graph.cpp
CMakeFiles/graph_algorithms_lib.dir/src/adjacency_matrix_graph.cpp.obj: CMakeFiles/graph_algorithms_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\matro\Downloads\PiAAGrafy25\PiAAGrafy\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/graph_algorithms_lib.dir/src/adjacency_matrix_graph.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/graph_algorithms_lib.dir/src/adjacency_matrix_graph.cpp.obj -MF CMakeFiles\graph_algorithms_lib.dir\src\adjacency_matrix_graph.cpp.obj.d -o CMakeFiles\graph_algorithms_lib.dir\src\adjacency_matrix_graph.cpp.obj -c C:\Users\matro\Downloads\PiAAGrafy25\PiAAGrafy\src\adjacency_matrix_graph.cpp

CMakeFiles/graph_algorithms_lib.dir/src/adjacency_matrix_graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/graph_algorithms_lib.dir/src/adjacency_matrix_graph.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\matro\Downloads\PiAAGrafy25\PiAAGrafy\src\adjacency_matrix_graph.cpp > CMakeFiles\graph_algorithms_lib.dir\src\adjacency_matrix_graph.cpp.i

CMakeFiles/graph_algorithms_lib.dir/src/adjacency_matrix_graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/graph_algorithms_lib.dir/src/adjacency_matrix_graph.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\matro\Downloads\PiAAGrafy25\PiAAGrafy\src\adjacency_matrix_graph.cpp -o CMakeFiles\graph_algorithms_lib.dir\src\adjacency_matrix_graph.cpp.s

# Object files for target graph_algorithms_lib
graph_algorithms_lib_OBJECTS = \
"CMakeFiles/graph_algorithms_lib.dir/src/adjacency_list_graph.cpp.obj" \
"CMakeFiles/graph_algorithms_lib.dir/src/adjacency_matrix_graph.cpp.obj"

# External object files for target graph_algorithms_lib
graph_algorithms_lib_EXTERNAL_OBJECTS =

libgraph_algorithms_lib.a: CMakeFiles/graph_algorithms_lib.dir/src/adjacency_list_graph.cpp.obj
libgraph_algorithms_lib.a: CMakeFiles/graph_algorithms_lib.dir/src/adjacency_matrix_graph.cpp.obj
libgraph_algorithms_lib.a: CMakeFiles/graph_algorithms_lib.dir/build.make
libgraph_algorithms_lib.a: CMakeFiles/graph_algorithms_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\matro\Downloads\PiAAGrafy25\PiAAGrafy\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libgraph_algorithms_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles\graph_algorithms_lib.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\graph_algorithms_lib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/graph_algorithms_lib.dir/build: libgraph_algorithms_lib.a
.PHONY : CMakeFiles/graph_algorithms_lib.dir/build

CMakeFiles/graph_algorithms_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\graph_algorithms_lib.dir\cmake_clean.cmake
.PHONY : CMakeFiles/graph_algorithms_lib.dir/clean

CMakeFiles/graph_algorithms_lib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\matro\Downloads\PiAAGrafy25\PiAAGrafy C:\Users\matro\Downloads\PiAAGrafy25\PiAAGrafy C:\Users\matro\Downloads\PiAAGrafy25\PiAAGrafy\build C:\Users\matro\Downloads\PiAAGrafy25\PiAAGrafy\build C:\Users\matro\Downloads\PiAAGrafy25\PiAAGrafy\build\CMakeFiles\graph_algorithms_lib.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/graph_algorithms_lib.dir/depend

