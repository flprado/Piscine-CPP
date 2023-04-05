#pragma once
#include "Animals.hpp"

class Dog : public Animals{
    public:
    Dog();
    ~Dog();
    Dog &operator=(const Dog dog);
    void MakeSound() const;
};