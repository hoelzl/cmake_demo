// Created by Dr. Matthias Hölzl on 16/02/2024.
// Copyright (c) 2024 Dr. Matthias Hölzl. All rights reserved.

#ifndef CMAKE_DEMO_TODOLIST_H
#define CMAKE_DEMO_TODOLIST_H

#include <iostream>

class TodoList
{
public:
    TodoList() = default;
    explicit TodoList(std::string_view name);

    [[nodiscard]] const std::string &getName() const;
    void setName(const std::string &name);

private:
    std::string name_{"A Todo List"};
};

std::ostream &operator<<(std::ostream &os, const TodoList &list);

#endif // CMAKE_DEMO_TODOLIST_H
