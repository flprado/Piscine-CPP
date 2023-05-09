#pragma once

#include <iostream>

template<typename T> void iter(const T *tab, int size, void func(const T &))
{
    for (int i = 0; i < size; i++)
        func(tab[i]);
}

template<typename T> void printData(const T &data)
{
    std::cout << data << " ";
}