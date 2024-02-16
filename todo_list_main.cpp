// Created by Dr. Matthias Hölzl on 16/02/2024.
// Copyright (c) 2024 Dr. Matthias Hölzl. All rights reserved.

#include <iostream>
#include "TodoList.h"

int main()
{
    TodoList list;
    TodoList list2{"Another Todo List"};

    std::cout << list;
    std::cout << list2;

    list.setName("My Todo List");
    std::cout << list;

    return 0;
}