#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(){return ;}
Form::~Form(){return ;}
Form::Form(std::string name, int mingrade, int maxgrade) : _name(name)
{
    if (mingrade < 0)
        throw (Form::GradeTooHighException());
    else if (maxgrade > 150)
        throw (Form::GradeTooLowException());
    else
    {
        this->_mingrade = mingrade;
        this->_maxgrade = maxgrade;
    }
}
Form::Form(Form const &rhs)
{
    *this = rhs;
}
Form  &Form::operator=(Form const &rhs)
{
    if (this != &rhs)
    {
      this->_name = rhs._name;
      this->_mingrade = rhs._mingrade;
      this->_maxgrade = rhs._maxgrade;
    }
    return *this;
}
void Form::beSigned(Bureaucrat const &rhs)
{
    if (rhs.getGrade() > this->_mingrade)
        throw (GradeTooLowException());
    else
        this->_sign = true;
}
bool Form::check() const
{
    return (this->_sign);
}
Form::GradeTooHighException::GradeTooHighException(void) {}
Form::GradeTooHighException::~GradeTooHighException(void) throw() {}
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
    *this = src;
}
Form::GradeTooHighException	&Form::GradeTooHighException::operator=(Form::GradeTooHighException const &rhs)
{
	std::exception::operator=(rhs);
	return (*this);
}
Form::GradeTooLowException::GradeTooLowException(void) {}
Form::GradeTooLowException::~GradeTooLowException(void) throw() {}
Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
	*this = src;
}

Form::GradeTooLowException	&Form::GradeTooLowException::operator=(Form::GradeTooLowException const &rhs)
{
	std::exception::operator=(rhs);
	return (*this);
}
char const *Form::GradeTooHighException::what() const throw() {
    return "Grade too High";
}

char const *Form::GradeTooLowException::what() const throw() {
    return "Grade too Low";
}
std::string  Form::getName() const
{
    return (this->_name);
}

std::ostream &operator<< (std::ostream &out, const Form &rhs)
{
    if (!rhs.check())
        out << rhs.getName() << " cannot sign " << rhs.getMin() << std::endl;
    else
        out << rhs.getName() << " signs " << rhs.getMax() << std::endl;
    return (out);
}

int Form::getMin() const
{
    return (this->_mingrade);
}
int Form::getMax() const
{
    return (this->_maxgrade);
}
