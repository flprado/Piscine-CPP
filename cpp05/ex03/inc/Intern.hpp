#pragma once

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern 
{
    public:
        Intern();
        Intern(const Intern &intern);
        virtual ~Intern();
        Intern &operator=(const Intern&intern);
        Form *makeForm(const std::string formName, const std::string target) const;
};

typedef Form*(*constructorPtr)(const std::string);