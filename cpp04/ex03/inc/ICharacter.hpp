#pragma once
#include "AMateria.hpp"
#include <iostream>
#include <string>

class ICharacter
{
    protected:
        AMateria *iventory[4];
        std::string name;
    public:
        ICharacter();
        ~ICharacter() {};
        ICharacter(std::string name);
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};