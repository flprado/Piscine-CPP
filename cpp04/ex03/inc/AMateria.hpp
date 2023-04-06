#pragma once
#include "ICharacter.hpp"
#include <string>
#include <iostream>

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        AMateria &operator=(const AMateria &AMateria);
        virtual void use(ICharacter& target);
        virtual ~AMateria() = 0;
};