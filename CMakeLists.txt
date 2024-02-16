cmake_minimum_required(VERSION 3.21)

project(cmake_demo VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

# Without this, we have to declare all used symbols as exported
# e.g. with the following macros:
#
# #ifdef todo_list_lib_EXPORTS
# #define TodoLib_API __declspec(dllexport)
# #else
# #define TodoLib_API __declspec(dllimport)
# #endif
#
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(todo_list_lib TodoList.cpp TodoList.h)

add_executable(todo_list todo_list_main.cpp)
target_link_libraries(todo_list todo_list_lib)

add_executable(say_hello say_hello.cpp)
