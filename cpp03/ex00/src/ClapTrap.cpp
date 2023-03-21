#include <../int/ClapTrap.hpp>

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->name = "ClapTrap";
    this->hitPoint = 10;
    this->energy = 10;
    this->attack = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor with name called" << std::endl;
    this.name = name;
    this->hitPoint = 10;
    this->energy = 10;
    this->attack = 0;
}


ClapTrap &ClapTrap::operator =(const ClapTrap &c)
{
    std::cout << "Operator = called" << std::endl;
    this.name = c.name;
    this.hitPoint = c.hitPoint;
    this.energy = c.energy;
    this.attack = c.attack;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
    std::cout << "Copy constructor called" << std::endl;
    this = c;
}

ClapTrap::~ClapTrap()
{
   std::cout << "Constructor called !" << std::endl;
}

ClapTrap::beRepaired(unsigned int amount)
{
    if (this.energy > 0 && this.hitPoint > 0)
    {
        energy -= 1;
        this.hitPoint += amount;
        std::cout << "ClapTrap repaired " << amount << "of Hit Point, it is now at " << this.hitPoint << "HP" << std::endl;
    }
    else
        std::cout << "Not enough energy or HP!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this.energy > 0 && this.hitPoint > 0)
    {
        this.hitPoint -= amount;
        std::cout << "ClapTrap took " << amount << "of damages, it is now at " << this.hitPoint << " HP !" << std::endl;
    }
    else
        std::cout << "Not enough energy or HP!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this.energy > 0 && this.hitPoint > 0)
    {
        this.energy -= 1;
        std::cout << "ClapTrap " << this.name << " attacks " << target << ", causing " << this.attack << " points of damage!" << std::endl;
    }
    else
        std::cout << "Not enough energy or HP!" << std::endl;
}