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

## Version 0.2

- The only change in this version is a lower minimum version of CMake.

## Version 0.3

- We have added comments to the `CMakeLists.txt` file to explain what each
  line does.
- We have added a second executable target, `todo_list``.
- Use the `--target` option to build only the `todo_list` target.

## Version 0.4

- Add a `TodoList` class
- We have added this directly to the `todo_list` executable.
- This is not a good practice, since it makes, e.g., testing very difficult.

## Version 0.5

- Move the `TodoList` class to its own library.
- Update the `CMakeLists.txt` file to link the `todo_list` executable
  against the `todo_lib` library.
- Ensure that both static and dynamic linking is supported:
  - `cmake -DBUILD_SHARED_LIBS=ON ..` to build with dynamic linking.
  - `cmake -DBUILD_SHARED_LIBS=OFF ..` to build with static linking.