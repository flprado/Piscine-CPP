#pragma once 

#include <iostream>
#include <stack>
#include <iterator>
#include <list>

template <typename T> class MutantStack
{
public:
    MutantStack(){};
    ~MutantStack(){};
    MutantStack<T>(const MutantStack<T> &obj){*this = obj;}
    MutantStack<T> &operator=(const MutantStack<T> &obj)
    {
        (void)obj;
        return *this;
    }
    typedef typename std::stack<T>::container_type::iterator it;
    it begin()
    {
        return this->c.begin();
    }
    it end()
    {
        return this->c.end();
    }
};
