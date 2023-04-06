#include "ICharacter.hpp"

ICharacter::ICharacter()
{
    this->inventory = new AMateria[4];
    this->name = "noName";
}

ICharacter::ICharacter(std::string name)
{
    this->inventory = new AMateria[4];
    this->name = name;
}

ICharacter::~ICharacter()
{
    delete this->inventory;
}

std::string const &ICharacter::getName() const
{
    return this->name;
}

void equip(AMateria *m)
{
    for (int i = 0; i < 4 ; i++)
    {
        if (this->inventory[i] != NULL)
        {
            this->inventory[i] = m;
            std::cout << m.getType() << " equiped in " << i << "th slot in inventory" << std::endl;
            return ;
        }
    }
    std::cout << "Not enought space in " << this->name << "'s inventory " << std::endl;
}
