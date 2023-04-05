#include "Dog.hpp"
#include <string>
#include <iostream>

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "dog";
}
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::MakeSound() const
{
    std::cout << "woof" << std::endl;
}