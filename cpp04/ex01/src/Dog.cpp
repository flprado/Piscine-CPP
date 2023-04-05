#include "Dog.hpp"
#include <string>
#include <iostream>

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    Brain *brain = new Brain();
    this->type = "dog";
}
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void Dog::MakeSound() const
{
    std::cout << "woof" << std::endl;
}