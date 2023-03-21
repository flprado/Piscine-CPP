#include <string>

class ClapTrap 
{
    private:
        std::string name;
        int hitPoint;
        int energy;
        int attack;
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