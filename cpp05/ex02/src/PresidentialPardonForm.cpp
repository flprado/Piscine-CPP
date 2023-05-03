#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential Pardon Form", 25, 5), _target("default")
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("Presidential Pardon Form", 25, 5), _target(target)
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presform)
{
    *this = presform;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presform)
{
    (void)presform;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
    this->Form::executeCheck(bureaucrat);
    std::cout << _target << " was forgiven by Zafor Beeblebrox" << std::endl;
}