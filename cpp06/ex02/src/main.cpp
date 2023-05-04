#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base *generate(void)
{
    int rand;

    rand = std::rand() % 3;
    if (rand == 0)
        return (new A());
    if (rand == 1)
        return (new B());
    return new C();
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p) != NULL)
    {
        std::cout << "A" << std::endl;
        return ;
    }
    if (dynamic_cast<B *>(p) != NULL)
    {
        std::cout << "B" << std::endl;
        return ;
    }
    if (dynamic_cast<C *>(p) != NULL)
    {
        std::cout << "C" << std::endl;
        return ;
    }
}

void identify(Base &p)
{
    try 
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e) {}
    try 
    {
        (void)dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e) {}
    try
    {
        (void)dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e){}
}

int main()
{
    Base *p;
    srand(time(NULL));

    p = generate();
    identify(p);
    identify(*p);
    delete p;
    return 0;
}