#pragma once
#include <iostream>
#include <string>
#include <../inc/Bureaucrat.hpp>

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        int _requiredSign;
        int _requiredExec;
        bool _signed;
    public: 
        Form();
        Form(std::string name, int requiredSign, int requiredExec);
        Form(const Form &form);
        virtual ~Form();

        Form &operator=(const Form &Form);

        const   std::string getName(void) const;
        int     getRequiredSign(void) const;
        int     getRequiredExec(void) const;
        
        bool    getSigned(void) const;
        virtual void execute(const Bureaucrat &bureaucrat) const = 0;
        void    executeCheck(const Bureaucrat &bureaucrat) const;
        void    BeSigned(const Bureaucrat &bureaucrat);    

        class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("grade is too high"); }
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("grade is too low"); }
		};

        class ExecuteNotSigned: public std::exception
        {
            public:
                virtual const char *what() const throw() {return ("form is not signed"); }
        };

        class FileOpeningFail : public std::exception
        {
            public:
                virtual const char *what() const throw() {return("file cant be opened"); }
        };
};

std::ostream &operator<<(std::ostream &out, const Form &Form);