#include <exception>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int				main(void)
{
	Bureaucrat b("joe", 2);

    ShrubberyCreationForm f("f1");
    PresidentialPardonForm p("p1");
    RobotomyRequestForm r("r1");
    try 
	{
        b.signForm(f);
        b.signForm(p);
        b.signForm(r);
    }
    catch (std::exception const &e) 
	{
        std::cout << e.what() << std::endl;
    }

    b.executeForm(f);
    b.executeForm(p);
    b.executeForm(r);
    return 0;
}
