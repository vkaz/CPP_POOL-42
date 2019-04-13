#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){return ;}

PresidentialPardonForm::~PresidentialPardonForm(){return ;}
PresidentialPardonForm::PresidentialPardonForm(std::string name):
    Form("Presidential Pardon Form", 25, 5)
{
    this->_target = name;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs):
    Form("Presidential Pardon Form", 25, 5)
{
    *this = rhs;
}
PresidentialPardonForm  &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    if (this != &rhs)
    {
      this->_target = rhs._target;
    }
    return *this;
}
std::string PresidentialPardonForm::getTarget(void)
{
    return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() < 5)
        std::cout << this->_target << "  has been pardoned by Zaphod Beeblebrox." << std::endl;
    else
    {
        throw(Form::UnsignedException());
    }
    
}