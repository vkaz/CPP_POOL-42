#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){return ;}

Bureaucrat::~Bureaucrat(){return ;}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 0)
        throw (Bureaucrat::GradeTooHighException());
    else if (grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    else
    {
        this->_grade = grade;
    }
}
Bureaucrat::Bureaucrat(Bureaucrat const &rhs)
{
    *this = rhs;
}
Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this != &rhs)
    {
      this->_name = rhs._name;
      this->_grade = rhs._grade;
    }
    return *this;
}
void Bureaucrat::decrement() {
    if (this->_grade + 1 > 150) {
        throw (Bureaucrat::GradeTooLowException());
    }
    else {
        this->_grade++;
    }
}
Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}
Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
    *this = src;
}
Bureaucrat::GradeTooHighException	&Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &rhs)
{
	std::exception::operator=(rhs);
	return (*this);
}
Bureaucrat::GradeTooLowException::GradeTooLowException(void) {}
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}
Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
	*this = src;
}

Bureaucrat::GradeTooLowException	&Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const &rhs)
{
	std::exception::operator=(rhs);
	return (*this);
}
char const *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too High";
}

char const *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too Low";
}
void Bureaucrat::increment() {
    if (this->_grade - 1 <= 0) {
        throw (Bureaucrat::GradeTooHighException());
    }
    else {
        this->_grade--;
    }
}
std::string  Bureaucrat::getName() const
{
    return (this->_name);
}
int          Bureaucrat::getGrade() const
{
    return (this->_grade);
}

std::ostream &operator<< (std::ostream &out, const Bureaucrat &rhs)
{
    out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return (out);
}
