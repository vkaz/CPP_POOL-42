#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string _target;
public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const &rhs);
    PresidentialPardonForm(std::string name);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
    void execute(Bureaucrat const & executor) const;
    std::string  getTarget();
};


#endif
