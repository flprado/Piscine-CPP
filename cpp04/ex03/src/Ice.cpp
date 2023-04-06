#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice (const Ice &ice) : AMateria (ice)
{
    *this = ice;
}

Ice &Ice::operator=(const Ice &ice)
{
    (void)ice;
    return *this;
}

Ice *Ice::clone() const
{
    Ice *ice = new Ice();
    return ice;
}

void Ice::use(ICharacter &target)
{
    std::cout << "*shoots an ice bold at " << target.getName() << " *" << std::endl;
}