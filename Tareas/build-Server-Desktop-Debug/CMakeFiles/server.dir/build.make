# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/Server"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/build-Server-Desktop-Debug"

# Include any dependencies generated for this target.
include CMakeFiles/server.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/server.dir/flags.make

CMakeFiles/server.dir/main.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/main.cpp.o: /home/domtaxx/Desktop/\ Github\ Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/Server/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/build-Server-Desktop-Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/server.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/main.cpp.o -c "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/Server/main.cpp"

CMakeFiles/server.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/Server/main.cpp" > CMakeFiles/server.dir/main.cpp.i

CMakeFiles/server.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/Server/main.cpp" -o CMakeFiles/server.dir/main.cpp.s

CMakeFiles/server.dir/graph.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/graph.cpp.o: /home/domtaxx/Desktop/\ Github\ Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/Server/graph.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/build-Server-Desktop-Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/server.dir/graph.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/graph.cpp.o -c "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/Server/graph.cpp"

CMakeFiles/server.dir/graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/graph.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/Server/graph.cpp" > CMakeFiles/server.dir/graph.cpp.i

CMakeFiles/server.dir/graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/graph.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/Server/graph.cpp" -o CMakeFiles/server.dir/graph.cpp.s

CMakeFiles/server.dir/socket_S.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/socket_S.cpp.o: /home/domtaxx/Desktop/\ Github\ Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/Server/socket_S.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/build-Server-Desktop-Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/server.dir/socket_S.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/socket_S.cpp.o -c "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/Server/socket_S.cpp"

CMakeFiles/server.dir/socket_S.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/socket_S.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/Server/socket_S.cpp" > CMakeFiles/server.dir/socket_S.cpp.i

CMakeFiles/server.dir/socket_S.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/socket_S.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/Server/socket_S.cpp" -o CMakeFiles/server.dir/socket_S.cpp.s

# Object files for target server
server_OBJECTS = \
"CMakeFiles/server.dir/main.cpp.o" \
"CMakeFiles/server.dir/graph.cpp.o" \
"CMakeFiles/server.dir/socket_S.cpp.o"

# External object files for target server
server_EXTERNAL_OBJECTS =

server: CMakeFiles/server.dir/main.cpp.o
server: CMakeFiles/server.dir/graph.cpp.o
server: CMakeFiles/server.dir/socket_S.cpp.o
server: CMakeFiles/server.dir/build.make
server: CMakeFiles/server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/build-Server-Desktop-Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/server.dir/build: server

.PHONY : CMakeFiles/server.dir/build

CMakeFiles/server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/server.dir/clean

CMakeFiles/server.dir/depend:
	cd "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/build-Server-Desktop-Debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/Server" "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/Server" "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/build-Server-Desktop-Debug" "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/build-Server-Desktop-Debug" "/home/domtaxx/Desktop/ Github Repositorios/Estructuras-y-Algoritmos-de-Datos-2/Tareas/build-Server-Desktop-Debug/CMakeFiles/server.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/server.dir/depend

