#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
    this->attackDamage = 20;
    this->hitPoint = 100;
    this->energy = 50;
    std::cout << "ScavTrap default  constructor called " << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->attackDamage = 20;
    this->hitPoint = 100;
    this->energy = 50;
    std::cout << "ScavTrap constructor with name called "<< std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << this->name << " passed in Gate Keeper mode " << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap default destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &scav)
{
    std::cout << "Scav equal operator called" << std::endl;
    this->name = scav.name;
    this->attackDamage = scav.attackDamage;
    this->hitPoint = scav.hitPoint;
    this->energy = scav.energy;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &scav) : ClapTrap()
{
    std::cout << "Scav Copy constructor called "<< std::endl;
    *this = scav;
}