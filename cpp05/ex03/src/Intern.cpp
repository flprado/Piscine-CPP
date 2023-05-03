#include "Intern.hpp"

Intern::Intern()
{
    return ;
}

Intern::Intern(const Intern &intern)
{
    *this = intern;
}

Intern::~Intern()
{

}

Intern &Intern::operator=(const Intern &intern)
{
    (void)intern;
    return *this;
}

static Form *newShrubbery(const std::string target)
{
    return (new ShrubberyCreationForm(target));
}

static Form *newRobotomy(const std::string target)
{
    return (new RobotomyRequestForm(target));
}

static Form *newPresidential(const std::string target)
{
    return (new PresidentialPardonForm(target));
}

static int getNumber(const std::string name)
{
    std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    int tmp = -1;

    for (int i = 0; i < 3; i++)
    {
        if (name == names[i])
        {
            tmp = i;
            break;
        }    
    }
    return tmp;
}

Form *Intern::makeForm(const std::string name, const std::string target) const
{
    constructorPtr tab[3] = {&newShrubbery, &newRobotomy, &newPresidential};
    int tmp;
    Form *formPtr = NULL;

    tmp = getNumber(name);
    if (tmp >= 0)
    {
        formPtr = tab[tmp](target);
        std::cout << "Intern creates " << formPtr->getName() << "form" << std::endl;
    }
    else
        std::cout << "Intern cant create " << name << "unknown form" << std::endl;
    return formPtr;
}