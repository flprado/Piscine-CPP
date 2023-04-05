#pragma once 
#include <string>
class Brain {
    private: 
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain &brain);
        Brain &operator=(Brain brain);

};