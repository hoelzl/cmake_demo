# A Simple CMake Project

This is a simple project that demonstrates how to use CMake to build 
simple C++ projects.

There are various tags in this repository, corresponding to different
stages of the project. You can use these tags to follow the project
from start to finish.

## Version 0.1

- This version contains just a "Hello, World!" program.
- The source code is contained in a single file, `say_hello.cpp`.
- The `CMakeLists.txt` file defines a project `cmake_demo`.
- This project provides a single executable, `say_hello`.
- The line `add_executable(say_hello say_hello.cpp)` defines
  - That an executable with the name `say_hello` will be built.
  - The source code for the executable is in the file `say_hello.cpp`.

