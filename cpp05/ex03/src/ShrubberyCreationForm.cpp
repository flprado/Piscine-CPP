#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery creation", 145, 137), _target("default")
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("Shrubbery creation", 145, 137), _target(target)
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyform)
{
    *this = shrubberyform;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyform)
{
    (void)shrubberyform;
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
    std::ofstream file;

    this->Form::executeCheck(bureaucrat);
    file.open((_target + "_shrubbery").c_str());
    if (file.good() == false)
        throw FileOpeningFail();
    file << "       ###" << std::endl;
    file << "      #o###" << std::endl;
    file << "    #####o###" << std::endl;
    file << "   #o#|#|#|###" << std::endl;
    file << "    ###|||#o#" << std::endl;
    file << "     # }|{  #" << std::endl;
    file << "       }|{" << std::endl;
    file.close();
}