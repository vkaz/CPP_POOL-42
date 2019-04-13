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
	Form		*form;
	std::string str;

	if (name == "shrubbery creation")
	{
		form = (Form *)new ShrubberyCreationForm(target);
		if (form->check() == 0)
			str = "(Unsigned)";
		else
			str = "(Signed)";
		std::cout << "Intern creates Shrubbery Creation Form (s.grade " <<
			form->getMin()<< ", ex.grade " << form->getMax() << ") targeted on " <<
			target << " " << str << std::endl;
		return (form);
	}
	else if (name == "robotomy request")
	{
		form = (Form *)new RobotomyRequestForm(target);
		if (form->check() == 0)
			str = "(Unsigned)";
		else
			str = "(Signed)";
		std::cout << "Intern creates Robotomy Creation Form (s.grade " <<
			form->getMin()<< ", ex.grade " << form->getMax() << ") targeted on " <<
			target << " " << str << std::endl;
		return (form);
	}
	else if (name == "presidential pardon")
	{
		form = (Form *)new PresidentialPardonForm(target);
		if (form->check() == 0)
			str = "(Unsigned)";
		else
			str = "(Signed)";
		std::cout << "Intern creates Presidential Pardon Form (s.grade " <<
			form->getMin()<< ", ex.grade " << form->getMax() << ") targeted on " <<
			target << " " << str << std::endl;
		return (form);
	}
	else
	{
		std::cout << "Intern can't find the " << name << " form !" << std::endl;
		return (NULL);
	}
}
