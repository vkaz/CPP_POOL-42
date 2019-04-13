#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "Form.hpp"

class Intern
{
private:
    std::string _target;
public:
    Intern();
    ~Intern();
    Intern(Intern const &rhs);
    Intern(std::string name);
    Intern &operator=(Intern const &rhs);
    Form  *makeForm(std::string name, std::string target);
};


#endif
