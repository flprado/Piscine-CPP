#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

    public:
        virtual ~IMateriaSource();
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};