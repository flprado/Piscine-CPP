#pragma once
#include <ctime>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        const std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &robot);
        RobotomyRequestForm(const std::string target);
        virtual ~RobotomyRequestForm();

        RobotomyRequestForm &operator=(const RobotomyRequestForm &robot);
        void execute(const Bureaucrat &bureaucrat) const;
};