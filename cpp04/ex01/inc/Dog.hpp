#pragma once
#include "Animals.hpp"
#include "Brain.hpp"

class Dog : public Animals{
    private:
    Brain *brain;
    public:
    Dog();
    ~Dog();
    Dog &operator=(const Dog dog);
    void MakeSound() const;
};