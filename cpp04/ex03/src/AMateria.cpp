
#include "AMateria.hpp"

AMateria::AMateria() : type("unknown")
{
    return ;
}

AMateria::AMateria(std::string const &type) : type(type)
{
    this->type = type;
}

AMateria::AMateria (const AMateria &aMateria)
{
    *this = aMateria;
}

AMateria::~AMateria ()
{
}

AMateria &AMateria::operator=(const AMateria &aMateria)
{
    if (this != &aMateria)
        type = aMateria.type;
    return (*this);
}

std::string const &AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "Unknown mouvement on " << target.getName() << std::endl;
}