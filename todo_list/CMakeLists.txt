add_library(todo_list_lib TodoList.cpp TodoList.h)

# If this is not included, the header file has to be included with the
# directory path: #include "todo_list/TodoList.h".
# With this, the header file can be included with: #include "TodoList.h".
#
target_include_directories(todo_list_lib PUBLIC .)
