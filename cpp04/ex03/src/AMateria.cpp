
#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}

AMateria &AMateria::operator=(const AMateria &AMateria)
{
    *this->type = AMateria.getType();
    return *this;
}

std::string const &AMateria::getType() const
{
    return this->type;
}

AMateria *AMateria::clone() const 
{
    AMateria amat = new AMateria(this->getType());
    return amat;
}


