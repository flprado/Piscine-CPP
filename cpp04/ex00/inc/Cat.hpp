#pragma once
#include "Animals.hpp"
#include "Brain.hpp"
class Cat : public Animals {
    private:
        Brain *brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat &Cat);
        Cat &operator=(Cat cat);
        void MakeSound() const;
};