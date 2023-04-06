#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materiasource)
{
    *this = materiasource;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i];
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource)
{
    if (this != &materiaSource)
    {
        for(int i = 0; i < 4; i++)
        {
            if (inventory[i])
                delete inventory[i];
            if (materiaSource.inventory[i])
                inventory[i] = materiaSource.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return *this;
}

void    MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4 ; i++)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
            return ;
        }
    }
    std::cout << "inventory full, cannot create new materia" << std::endl;
    delete m;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for (int i =0;i < 4; i++)
    {
        if (inventory[i] != NULL && inventory[i]->getType() == type)
            return (inventory[i]->clone());
    }
    std::cout << "Cannot create this type of materia" << std::endl;
    return NULL;
}