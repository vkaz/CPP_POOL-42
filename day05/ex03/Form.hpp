#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
    std::string _name;
    int         _mingrade;
    int         _maxgrade;
    bool        _sign;
public:
    Form();
    ~Form();
    Form(Form const &rhs);
    Form(std::string name, int _mingrade, int _maxgrade);
    Form &operator=(Form const &rhs);
    class  GradeTooHighException : public std::exception
    {
        public:
        GradeTooHighException();
        ~GradeTooHighException() throw();
        GradeTooHighException(GradeTooHighException  const &rhs);
        GradeTooHighException  &operator=(GradeTooHighException const &rhs);
        char const *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
        GradeTooLowException();
        ~GradeTooLowException() throw();
        GradeTooLowException(GradeTooLowException const &rhs);
        GradeTooLowException &operator=(GradeTooLowException const &rhs);
        char const *what() const throw();
    };
    class UnsignedException : public std::exception
    {
        public:
        UnsignedException();
        ~UnsignedException() throw();
        UnsignedException(UnsignedException const &rhs);
        UnsignedException &operator=(UnsignedException const &rhs);
        char const *what() const throw();
    };
    std::string  getName() const;
    void beSigned(Bureaucrat const &rhs);
    virtual void execute(Bureaucrat const & executor) const = 0;
    bool check() const;
    int getMin() const;
    int getMax() const;
};

std::ostream &operator<<(std::ostream &out, const Form &rhs);

#endif
