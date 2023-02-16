# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_SOURCE_DIR = /home/csmajs/apadi089/final-project-j-a-k-a-l

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/csmajs/apadi089/final-project-j-a-k-a-l

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/csmajs/apadi089/final-project-j-a-k-a-l/CMakeFiles /home/csmajs/apadi089/final-project-j-a-k-a-l//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/csmajs/apadi089/final-project-j-a-k-a-l/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named Movie_Test

# Build rule for target.
Movie_Test: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 Movie_Test
.PHONY : Movie_Test

# fast build rule for target.
Movie_Test/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Movie_Test.dir/build.make CMakeFiles/Movie_Test.dir/build
.PHONY : Movie_Test/fast

MediaBowl.o: MediaBowl.cpp.o
.PHONY : MediaBowl.o

# target to build an object file
MediaBowl.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Movie_Test.dir/build.make CMakeFiles/Movie_Test.dir/MediaBowl.cpp.o
.PHONY : MediaBowl.cpp.o

MediaBowl.i: MediaBowl.cpp.i
.PHONY : MediaBowl.i

# target to preprocess a source file
MediaBowl.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Movie_Test.dir/build.make CMakeFiles/Movie_Test.dir/MediaBowl.cpp.i
.PHONY : MediaBowl.cpp.i

MediaBowl.s: MediaBowl.cpp.s
.PHONY : MediaBowl.s

# target to generate assembly for a file
MediaBowl.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Movie_Test.dir/build.make CMakeFiles/Movie_Test.dir/MediaBowl.cpp.s
.PHONY : MediaBowl.cpp.s

Movie.o: Movie.cpp.o
.PHONY : Movie.o

# target to build an object file
Movie.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Movie_Test.dir/build.make CMakeFiles/Movie_Test.dir/Movie.cpp.o
.PHONY : Movie.cpp.o

Movie.i: Movie.cpp.i
.PHONY : Movie.i

# target to preprocess a source file
Movie.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Movie_Test.dir/build.make CMakeFiles/Movie_Test.dir/Movie.cpp.i
.PHONY : Movie.cpp.i

Movie.s: Movie.cpp.s
.PHONY : Movie.s

# target to generate assembly for a file
Movie.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Movie_Test.dir/build.make CMakeFiles/Movie_Test.dir/Movie.cpp.s
.PHONY : Movie.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... Movie_Test"
	@echo "... MediaBowl.o"
	@echo "... MediaBowl.i"
	@echo "... MediaBowl.s"
	@echo "... Movie.o"
	@echo "... Movie.i"
	@echo "... Movie.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
