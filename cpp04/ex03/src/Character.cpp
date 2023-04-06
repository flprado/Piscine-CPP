#include "Character.hpp"

Character::Character() :name("any")
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const std::string &name): name(name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const Character &character)
{
    *this = character;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete inventory[i];
}

Character &Character::operator=(const Character &character)
{
    if (this != &character)
    {
        name = character.name;
        for (int i = 0; i < 4; i++)
        {
            if (inventory[i])
                delete inventory[i];
            if (character.inventory[i])
                inventory[i] = character.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return *this;
}

const std::string &Character::getName() const
{
    return name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4 ; i++)
    {
        if (inventory[i] != NULL)
        {
            inventory[i] = m;
            std::cout << m->getType() << " equiped in " << i << "th slot in inventory" << std::endl;
            return ;
        }
    }
    std::cout << "Not enought space in " << name << "'s inventory " << std::endl;
}

void Character::unequip(int idx)
{
    if (idx>=0 && idx < 4)
        inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx<4 && inventory[idx])
    {
        inventory[idx]->use(target);
        return;
    }
    std::cout << "An error occured" << std::endl;
}