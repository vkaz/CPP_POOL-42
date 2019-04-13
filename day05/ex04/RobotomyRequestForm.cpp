#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){return ;}

RobotomyRequestForm::~RobotomyRequestForm(){return ;}
RobotomyRequestForm::RobotomyRequestForm(std::string name):
    Form("Robotomy requst", 72, 42)
{
    srand(time(NULL));
    this->_target = name;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs):
    Form("Shrubbery Creation Form", 72, 42)
{
    *this = rhs;
}
RobotomyRequestForm  &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    if (this != &rhs)
    {
      this->_target = rhs._target;
    }
    return *this;
}

std::string RobotomyRequestForm::getTarget(void)
{
    return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() < 45)
    {
        if (rand() % 2)
            std::cout << this->getName() << " has been robotomized succefully !" << std::endl;
        else
            std::cout << "HRHRHRHHRHRH something wrong, it’s a failure!" << std::endl;
    }
    else
        throw(Form::UnsignedException());
}
