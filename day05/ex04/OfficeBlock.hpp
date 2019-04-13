#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

#include <string>
#include "Intern.hpp"
#include "Bureaucrat.hpp"

class OfficeBlock
{
private:
    Intern *_intern;
    Bureaucrat *_b1;
    Bureaucrat *_b2;
public:
    OfficeBlock();
    ~OfficeBlock();
    OfficeBlock(Intern *i, Bureaucrat *b1, Bureaucrat *b2);
    OfficeBlock(OfficeBlock const &rhs);
    OfficeBlock &operator=(OfficeBlock const &rhs);
    void setIntern(Intern &rhs);
    void setSigner(Bureaucrat &rhs);
    void setExecutor(Bureaucrat &rhs);
    void doBureaucracy(std::string name, std::string target);
};

#endif
