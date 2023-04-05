#include "../inc/ClapTrap.hpp"

int main(void)
{
    ClapTrap copy;
    ClapTrap test = ClapTrap("Test");
    test.attack("oui");
    test.takeDamage(5);
    test.beRepaired(2);
    test.takeDamage(1);
    copy = test;
    copy.attack("nothing");
    return 0;
}