#pragma once 
#include "AMateria.hpp"

class Cure : public AMateria{
    private:
        std::string type;
    public:
        Cure();
        ~Cure();
        Cure &operator=(const Cure &cure);
        Cure(const Cure &cure);
        Cure *clone() const;
        void use(ICharacter &target);


};