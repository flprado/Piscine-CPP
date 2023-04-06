#pragma once
#include "ICharacter.hpp"

class Character : public ICharacter
{
    protected:
        AMateria *inventory[4];
        std::string name;
    public:
        Character();
        ~Character();
        Character(std::string name);
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

};