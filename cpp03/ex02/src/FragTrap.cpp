#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap")
{
    this->attackDamage = 30;
    this->hitPoint = 100;
    this->energy = 100;
    std::cout << "FragTrap default  constructor called " << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    this->attackDamage = 30;
    this->hitPoint = 100;
    this->energy = 100;
    std::cout << "FragTrap constructor with name called "<< std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "Who's up for a high five ?!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &frag)
{
    std::cout << "Scav equal operator called" << std::endl;
    this->name = frag.name;
    this->attackDamage = frag.attackDamage;
    this->hitPoint = frag.hitPoint;
    this->energy = frag.energy;
    return *this;
}

FragTrap::FragTrap(const FragTrap &frag) : ClapTrap()
{
    std::cout << "Scav Copy constructor called "<< std::endl;
    *this = frag;
}