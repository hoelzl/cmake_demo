// Created by Dr. Matthias Hölzl on 16/02/2024.
// Copyright (c) 2024 Dr. Matthias Hölzl. All rights reserved.

#include "TodoList.h"

TodoList::TodoList(std::string_view name) : name_{name}
{
}

const std::string &TodoList::getName() const
{
    return name_;
}

void TodoList::setName(const std::string &name)
{
    name_ = name;
}

std::ostream &operator<<(std::ostream &os, const TodoList &list)
{
    os << list.getName() << "\n";
    return os;
}
