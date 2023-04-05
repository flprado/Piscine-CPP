#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &scav);
        ScavTrap &operator=(ScavTrap const &scav);
        void guardGate();
};