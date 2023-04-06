#include "Character.hpp"

Character::Character()
{
    this->name = "noName";
}

Character::Character(std::string name)
{
    this->name = name;
}

Character::~Character()
{
    //delete this->inventory;
}

std::string const &Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4 ; i++)
    {
        if (this->inventory[i] != NULL)
        {
            this->inventory[i] = m;
            std::cout << m->getType() << " equiped in " << i << "th slot in inventory" << std::endl;
            return ;
        }
    }
    std::cout << "Not enought space in " << this->name << "'s inventory " << std::endl;
}
