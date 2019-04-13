#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <ostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    std::string _target;
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
    ShrubberyCreationForm(std::string name);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
    void execute(Bureaucrat const & executor) const;
    std::string  getTarget();
};



#endif
