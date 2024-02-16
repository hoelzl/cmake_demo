cmake_minimum_required(VERSION 3.21)

# Define a project, set the project name and version
project(cmake_demo VERSION 0.1.0 LANGUAGES CXX)

#[[
    We don't need to set the C++ standard here, since this is
    a very simple project.
    But we do so anyway, to show how it's done.
    Also to demonstrate multi-line comments.

    #[==[ Multi-line comments can be nested. To this end, you can place an
          arbitrary number of equals signs between the square brackets. ]==]
]]
set(CMAKE_CXX_STANDARD 20)

# First executable target: todo_list
add_executable(todo_list todo_list_main.cpp
        TodoList.cpp
        TodoList.h)

# Second executable target: say_hello
add_executable(say_hello say_hello.cpp)
