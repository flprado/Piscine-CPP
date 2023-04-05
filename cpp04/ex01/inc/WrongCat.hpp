#pragma once
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal {

    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &Cat);
        WrongCat &operator=(WrongCat cat);
        void MakeSound() const;
};