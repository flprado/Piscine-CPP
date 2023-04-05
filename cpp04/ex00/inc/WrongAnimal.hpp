#pragma once
#include <string>
#include <iostream>

class WrongAnimal {

    protected:
        std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal &operator=(const WrongAnimal &WrongAnimal);
        std::string getType() const;
        void setType(std::string type);
        void MakeSound() const;
};