#pragma once
#include <string>
#include <iostream>

class Animals {

    protected:
        std::string type;
    public:
        Animals();
        ~Animals();
        Animals(std::string type);
        Animals &operator=(const Animals &animals);
        std::string getType() const;
        void setType(std::string type);
        virtual void MakeSound() const;
};