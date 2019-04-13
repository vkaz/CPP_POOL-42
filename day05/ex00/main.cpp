#include <exception>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int				main(void)
{
	try
	{
		Bureaucrat	bob("Bob", 152);
		std::cout << bob;
		bob.increment();
		std::cout << bob;
		bob.decrement();
		std::cout << bob;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR Bob" << std::endl;
	}
	return (0);
}