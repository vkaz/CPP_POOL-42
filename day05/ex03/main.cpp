#include <exception>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int				main(void)
{
    Intern intern;
    Form* form;
    form = intern.makeForm("shrubbery creation", "Bender");
    form = intern.makeForm("robotomy request", "Bender");
    form = intern.makeForm("presidential pardon", "Bender");
    return (0);
}
