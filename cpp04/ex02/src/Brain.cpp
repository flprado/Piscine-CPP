#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}
Brain::~Brain()
{
    std::cout << "Brain destructor called " << std::endl;
}

Brain::Brain(const Brain &brain)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = brain;
}
 
Brain &Brain::operator=(Brain brain)
{
    for (int i = 0; i<100; i++)
        brain.ideas[i] = this->ideas[i];
    return *this;
}
