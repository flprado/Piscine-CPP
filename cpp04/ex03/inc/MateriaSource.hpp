#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    protected:
        AMateria    *inventory[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &materiasource);
        virtual ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &materiasouce);
        void learnMateria(AMateria *m);
        AMateria* createMateria(std::string const & type);
};