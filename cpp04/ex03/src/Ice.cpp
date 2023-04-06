#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
}

Ice::~Ice()
{
}

Ice &Ice::operator=(const Ice &ice)
{
    if (this->type != "ice")
        this->type = "ice";
    return *this;
}

Ice *Ice::clone()
{
    Ice ice = new Ice();
    return *ice;
}

void Ice::use(ICharacter &target)
{
    std::cout << "*shoots an ice bold at " << target.getName() << " *" << std::endl;
}