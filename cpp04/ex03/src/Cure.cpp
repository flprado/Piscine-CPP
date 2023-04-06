#include "Cure.hpp"

#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
}

Cure::~Cure()
{
}

Cure &Cure::operator=(const Cure &cure)
{
    if (this->type != "cure")
        this->type = "cure";
    return *this;
}

Cure *Cure::clone()
{
    Cure cure = new Cure();
    return *cure;
}

void Cure::use(ICharacter &target)
{
    std::cout << "*heals " << target.getName() << "'s wounds *" << std::endl;
}