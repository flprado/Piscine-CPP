#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy request form", 72, 45), _target("default")
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("Robotomy request form",  72, 45), _target(target)
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robot)
{
    *this = robot;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robot)
{
    (void)robot;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
    int rob;

    this->Form::executeCheck(bureaucrat);
    std::cout << "*BzzZzz BzzZzz*";
    rob = rand() %2;
    if (rob)
        std::cout << _target << "got robotomized" << std::endl;
    else
        std::cout << "robotomization on " << _target << " failed " << std::endl;
}