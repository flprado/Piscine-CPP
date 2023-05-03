#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) 
{
    return ;
}

Bureaucrat::~Bureaucrat()
{
    return ;
}
Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &Bureaucrat)
{
    *this = Bureaucrat;
}


Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &Bureaucrat)
{
    if (this != &Bureaucrat)
    {
        _grade = Bureaucrat._grade;
    }
    return (*this);
}

std:: ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", grade " << bureaucrat.getGrade();
    return out;
}

const std::string Bureaucrat::getName(void) const 
{
    return _name;
}

int Bureaucrat::getGrade(void) const
{
    return _grade;
}

void Bureaucrat::upGrade(void)
{
    if (_grade <= 1)
        throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::downGrade(void)
{
    if (_grade >= 150)
        throw GradeTooLowException();
    _grade++;
}

void Bureaucrat::signForm(Form &form) const
{
    try
    {
        form.BeSigned(*this);
        std::cout << _name << " signs " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << _name << "couldnt sign " << form.getName() << " because " << e.what() << std::endl;
    }
    
}

void Bureaucrat::executeForm(const Form &form) const
{
    try 
    {
        form.execute(*this);
        std::cout << _name << " executes " << form.getName() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << _name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade entered is too high. Max level is 1");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade entered is too low. Min level is 150");
}