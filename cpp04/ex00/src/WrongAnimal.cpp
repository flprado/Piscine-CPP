#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Wrong animal default constructor called " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong animal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "Wrong animal constructor with type called" << std::endl;
    this->type = type;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
{
    std::cout << "Wrong animal = operator called" << std::endl;
    this->type = WrongAnimal.getType();
    return *this;
}

void WrongAnimal::MakeSound() const
{
    std::cout << "Some Wrong Animal sound" << std::endl;
}