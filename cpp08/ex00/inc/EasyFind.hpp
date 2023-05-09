#pragma once

#include <iostream>
#include <numeric>
#include <string>
#include <vector>
#include <list>

class found : public std::exception
{
    public:
        const char *what() const throw() 
        {
            return ("Not found\n");
        }
};

template <typename T> void EasyFind(T first, const int second)
{
    if((std::find(first.begin(), first.end(), second)) == first.end())
        throw found();
    std::cout << "Found : " << second << std::endl;
}