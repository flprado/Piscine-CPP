#include "../inc/Form.hpp"

Form::Form(void) : _name("default"), _requiredSign(150), _requiredExec(150), _signed(false)
{
    return ;
};

Form::Form(const std::string name, int requiredSign, int requiredExec) : 
                    _name(name), _requiredSign(requiredSign), _requiredExec(requiredExec), _signed(false)
{
    if (_requiredSign < 1 || _requiredExec < 1)
        throw GradeTooHighException();
    if (_requiredSign > 150 || _requiredExec > 150)
        throw GradeTooLowException();
};

Form::Form(const Form &Form)
{
    *this = Form;
}

Form::~Form()
{
    return ;
}

const std::string Form::getName(void)const
{
    return _name;
} 

int Form::getRequiredSign(void) const
{
    return _requiredSign;
}

int Form::getRequiredExec(void) const
{
    return _requiredExec;
}

bool Form::getSigned(void) const
{
    return _signed;
}

void Form::BeSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _requiredSign)
        throw GradeTooLowException();
    _signed = true;
}

Form &Form::operator=(const Form &form)
{
    if (this != &form)
        _signed = form._signed;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "Name : " << form.getName() << std::endl;
    out << "Signed : " << form.getSigned() << std::endl;
    out << "Grade required to sign : " << form.getRequiredSign() << std::endl;
    out << "Grade required to exec : " << form.getRequiredExec() << std::endl;
    return out;
}
