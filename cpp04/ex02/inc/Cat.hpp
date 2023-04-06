#pragma once
#include "Animals.hpp"
#include "Brain.hpp"
class Cat : public Animals {
    private:
        Brain *brain;
    public:
        Cat();
        virtual ~Cat();
        Cat(const Cat &Cat);
        Cat &operator=(Cat cat);
        virtual void MakeSound() const;
};