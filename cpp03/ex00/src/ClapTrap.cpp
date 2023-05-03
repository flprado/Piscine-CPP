#include <../inc/ClapTrap.hpp>

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    this->name = "ClapTrap";
    this->hitPoint = 10;
    this->energy = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Constructor with name called" << std::endl;
    this->name = name;
    this->hitPoint = 10;
    this->energy = 10;
    this->attackDamage = 0;
}


ClapTrap &ClapTrap::operator =(const ClapTrap &c)
{
    std::cout << "ClapTrap Operator = called" << std::endl;
    this->name = c.name;
    this->hitPoint = c.hitPoint;
    this->energy = c.energy;
    this->attackDamage = c.attackDamage;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = c;
}

ClapTrap::~ClapTrap()
{
   std::cout << "ClapTrap Destructor called !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy > 0 && this->hitPoint > 0)
    {
        energy -= 1;
        this->hitPoint += amount;
        std::cout << this->name << " repaired " << amount << " of Hit Point, it is now at " << this->hitPoint << " HP." << std::endl;
    }
    else if (this->hitPoint <= 0)
        std::cout << this->name << " is dead, cannot repair." << std::endl;
    else
        std::cout << this->name << " has not enough energy to repair." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoint > 0)
    {
        this->hitPoint -= amount;
        std::cout << this->name <<" took " << amount << " damages, it is now at " << this->hitPoint << " HP !" << std::endl;
        if (this->hitPoint <= 0)
            std::cout << this->name << " died !" << std::endl;
    }
    else
        std::cout << this->name << " is already dead !" << std::endl;
    
}

void ClapTrap::attack(const std::string &target)
{
    if (this->energy > 0 && this->hitPoint > 0)
    {
        this->energy -= 1;
        std::cout << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    }
    else if (this->hitPoint <=0)
        std::cout << this->name << " is dead, cannot attack." << std::endl;
    else
        std::cout << this->name << " has not enough energy to attack." << std::endl;
}