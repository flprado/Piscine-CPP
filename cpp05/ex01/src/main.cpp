#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int	main(void)
{
	Form 		f("formular", 10, 4);
	Bureaucrat	bob("Bob", 11);

	std::cout << f << std::endl;
	std::cout << bob << std::endl;
	
	bob.signForm(f);
	bob.upGrade();
	bob.signForm(f);

	std::cout << std::endl << f << std::endl;

	return (0);
}