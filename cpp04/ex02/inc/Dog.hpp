#pragma once
#include "Animals.hpp"
#include "Brain.hpp"

class Dog : public Animals{
    private:
    Brain *brain;
    public:
    Dog();
    virtual ~Dog();
    Dog &operator=(const Dog dog);
    virtual void MakeSound() const;
};