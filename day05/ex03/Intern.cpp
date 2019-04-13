#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){return ;}
Intern::~Intern(){return ;}
Intern::Intern(Intern const &rhs)
{
    *this = rhs;
}
Intern  &Intern::operator=(Intern const &rhs)
{
    (void)&rhs;
    return *this;
}

Form				*Intern::makeForm(std::string name, std::string target)
{
	Form			*form;

	if (name == "shrubbery creation")
	{
		form = (Form *)new ShrubberyCreationForm(target);
		std::cout << "Intern creates " << name<< std::endl;
		return (form);
	}
	else if (name == "robotomy request")
	{
		form = (Form *)new RobotomyRequestForm(target);
		std::cout << "Intern creates " << name<< std::endl;
		return (form);
	}
	else if (name == "presidential pardon")
	{
		form = (Form *)new PresidentialPardonForm(target);
		std::cout << "Intern creates " << name<< std::endl;
		return (form);
	}
	else
	{
		std::cout << "Intern can't find the " << name << " form !" << std::endl;
		return (NULL);
	}
}
