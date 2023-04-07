#pragma once
#include <string>
#include <iostream>

class ClapTrap 
{
    protected:
        std::string name;
        int hitPoint;
        int energy;
        int attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &c);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &c);
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};