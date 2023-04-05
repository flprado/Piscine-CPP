#include "Animals.hpp"

Animals::Animals()
{
    std::cout << "Animals default constructor called" << std::endl;
}

Animals::~Animals()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animals::Animals(std::string type)
{
    this->type = type;
    std::cout << "Animal construcor with type called" << std::endl;
}

std::string Animals::getType() const
{
    return this->type;
}

void Animals::setType(std::string type)
{
    this->type = type;
}

Animals &Animals::operator=(const Animals &animals)
{
    std::cout << "Animal = operator called" << std::endl;
    this->type = animals.getType();
    return *this;
}

void Animals::MakeSound() const
{
    std::cout << "Some animal sound" << std::endl;
}