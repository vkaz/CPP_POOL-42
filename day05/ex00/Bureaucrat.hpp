#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
private:
    std::string _name;
    int         _grade;
public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const &rhs);
    Bureaucrat(std::string name, int grade);
    Bureaucrat &operator=(Bureaucrat const &rhs);
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
    std::string  getName() const;
    void         increment();
    void         decrement();
    int          getGrade() const;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs);

#endif
