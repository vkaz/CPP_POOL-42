#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string _target;
public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const &rhs);
    RobotomyRequestForm(std::string name);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
    void execute(Bureaucrat const & executor) const;
    std::string  getTarget();
};



#endif
