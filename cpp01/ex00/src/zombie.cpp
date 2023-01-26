#include "general.hpp"

void    randomChump(std::string name)
{
    Zombie zombie = Zombie(name);
    zombie.announce();
}

Zombie *newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);
    return (zombie);
}

Zombie::Zombie(void)
{
    return ;
}

~Zombie::Zombie(void)
{
    return ;
}

void    Zombie::announce(void)
{
    std::cout << this.name <<"Braiiiiiiinnnssss..." << std::endl;
}