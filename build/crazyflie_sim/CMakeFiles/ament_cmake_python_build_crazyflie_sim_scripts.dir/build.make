# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/krishsahni/ros2_ws/src/crazyswarm2/crazyflie_sim

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/krishsahni/ros2_ws/src/crazyswarm2/build/crazyflie_sim

# Utility rule file for ament_cmake_python_build_crazyflie_sim_scripts.

# Include any custom commands dependencies for this target.
include CMakeFiles/ament_cmake_python_build_crazyflie_sim_scripts.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ament_cmake_python_build_crazyflie_sim_scripts.dir/progress.make

CMakeFiles/ament_cmake_python_build_crazyflie_sim_scripts:
	cd /home/krishsahni/ros2_ws/src/crazyswarm2/build/crazyflie_sim/ament_cmake_python/crazyflie_sim && /usr/bin/python3 setup.py install_scripts -d scripts

ament_cmake_python_build_crazyflie_sim_scripts: CMakeFiles/ament_cmake_python_build_crazyflie_sim_scripts
ament_cmake_python_build_crazyflie_sim_scripts: CMakeFiles/ament_cmake_python_build_crazyflie_sim_scripts.dir/build.make
.PHONY : ament_cmake_python_build_crazyflie_sim_scripts

# Rule to build all files generated by this target.
CMakeFiles/ament_cmake_python_build_crazyflie_sim_scripts.dir/build: ament_cmake_python_build_crazyflie_sim_scripts
.PHONY : CMakeFiles/ament_cmake_python_build_crazyflie_sim_scripts.dir/build

CMakeFiles/ament_cmake_python_build_crazyflie_sim_scripts.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ament_cmake_python_build_crazyflie_sim_scripts.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ament_cmake_python_build_crazyflie_sim_scripts.dir/clean

CMakeFiles/ament_cmake_python_build_crazyflie_sim_scripts.dir/depend:
	cd /home/krishsahni/ros2_ws/src/crazyswarm2/build/crazyflie_sim && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krishsahni/ros2_ws/src/crazyswarm2/crazyflie_sim /home/krishsahni/ros2_ws/src/crazyswarm2/crazyflie_sim /home/krishsahni/ros2_ws/src/crazyswarm2/build/crazyflie_sim /home/krishsahni/ros2_ws/src/crazyswarm2/build/crazyflie_sim /home/krishsahni/ros2_ws/src/crazyswarm2/build/crazyflie_sim/CMakeFiles/ament_cmake_python_build_crazyflie_sim_scripts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ament_cmake_python_build_crazyflie_sim_scripts.dir/depend

