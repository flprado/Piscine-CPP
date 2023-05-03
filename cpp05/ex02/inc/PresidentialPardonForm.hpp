#pragma once 
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        const std::string _target;
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &presform);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm &presform);
        void execute(const Bureaucrat &bureaucrat) const;
};