#pragma once 
#include <string>
#include <iostream>

class Bureaucrat
{
    private:
        std::string const _name;
        int _grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
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
};
        std::ostream  &operator<<(std::ostream &out,const Bureaucrat &bureaucrat);