#pragma once
#include "Animals.hpp"

class Dog : public Animals{
    private:
    Brain *brain;
    public:
    Dog();
    ~Dog();
    Dog &operator=(const Dog dog);
    void MakeSound() const;
};