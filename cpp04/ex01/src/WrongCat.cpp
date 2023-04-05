#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    std::cout << "Wrong Cat default constructor called" << std::endl;
    this->setType("Wrongcat");
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong cat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &Wrongcat) : WrongAnimal()
{
    std::cout << "Wrong cat copy constructor called" << std::endl;
    *this = Wrongcat;
}

void WrongCat::MakeSound() const 
{
    std::cout << "WrongMeow" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat cat)
{
    if (cat.getType() != "Wrongcat")
        this->type = "Wrongcat";
    return *this;
}