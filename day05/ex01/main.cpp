#include <exception>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int				main(void)
{
	try
	{
		Bureaucrat	bob("Bob", 10);
		std::cout << bob;
		Form  form("form", 5, 20);
		bob.signForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
