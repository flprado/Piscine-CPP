#pragma once 
#include <string>
#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
    private:
        std::string const _name;
        int _grade;
    public:
        Bureaucrat();
        virtual ~Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &Bureaucrat);

        class GradeTooHighException : public std::exception 
        {
            public:
                const char *what() const throw();
        };

        class GradeTooLowException : public std::exception 
        {
            public:
                const char *what() const throw();
        };

        Bureaucrat &operator=(const Bureaucrat &Bureaucrat);
        const std::string getName(void) const;
        int getGrade(void) const;
        void upGrade(void);
        void downGrade(void);
        void signForm(Form &form) const;
        void executeForm(const Form &form) const;
};
        std::ostream  &operator<<(std::ostream &out,const Bureaucrat &bureaucrat);