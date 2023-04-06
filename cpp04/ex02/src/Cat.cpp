#include "Cat.hpp"
#include <string>
#include <iostream>

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    Brain *brain = new Brain();
    this->brain = brain;
    this->setType("cat");
}

Cat::~Cat()
{
    std::cout << "Cat default destructor called" << std::endl;
    delete brain;
}

Cat::Cat(const Cat &cat) : Animals()
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

void Cat::MakeSound() const 
{
    std::cout << "Meow" << std::endl;
}

Cat &Cat::operator=(Cat cat)
{
    if (cat.getType() != "cat")
        this->type = "cat";
    this->brain = cat.brain;
    return *this;
}