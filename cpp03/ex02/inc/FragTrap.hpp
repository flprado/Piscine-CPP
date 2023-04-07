#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &scav);
        FragTrap &operator=(FragTrap const &scav);
        void highFivesGuys(void);
};