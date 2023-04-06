#include "Cure.hpp"


Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure &cure) : AMateria(cure)
{
    *this = cure;
}

Cure &Cure::operator=(const Cure &cure)
{
    (void)cure;
    return *this;
}

Cure *Cure::clone() const
{
    Cure *cure = new Cure();
    return cure;
}

void Cure::use(ICharacter &target)
{
    std::cout << "*heals " << target.getName() << "'s wounds *" << std::endl;
}