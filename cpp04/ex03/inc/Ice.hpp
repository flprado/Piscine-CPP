#pragma once
#include "AMateria.hpp"

class Ice : public AMateria{
    private:
        std::string type;
    public:
        Ice();
        ~Ice();
        Ice &operator=(const Ice &ice);
        Ice(const Ice &Ice);
        Ice *clone() const;
        void use(ICharacter &target);

};