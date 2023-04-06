#pragma once
#include "AMateria.hpp"

class Ice : public AMateria{
    private:
        std::string type;
    public:
        Ice();
       virtual ~Ice();
        Ice(const Ice &Ice);
        Ice &operator=(const Ice &ice);
        Ice *clone() const;
        void use(ICharacter &target);

};