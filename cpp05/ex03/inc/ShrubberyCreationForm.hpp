#pragma once

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    const std::string  _target;

public:
    ShrubberyCreationForm(void);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string _target);
    ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyform);
    void execute(const Bureaucrat &bureaucrat) const;
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shrubberyform);
};