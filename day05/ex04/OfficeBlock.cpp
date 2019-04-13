#include "OfficeBlock.hpp"
#include "Form.hpp"

OfficeBlock::OfficeBlock(){return ;}
OfficeBlock::OfficeBlock(Intern *i, Bureaucrat *b1, Bureaucrat *b2)
{
    this->_intern = i;
    this->_b1 = b1;
    this->_b2 = b2;
}
OfficeBlock::~OfficeBlock(){return ;}
OfficeBlock::OfficeBlock(OfficeBlock const &rhs)
{
    *this = rhs;
}
OfficeBlock  &OfficeBlock::operator=(OfficeBlock const &rhs)
{
    if (this != &rhs)
    {
        this->_intern = rhs._intern;
        this->_b1 = rhs._b1;
        this->_b2 = rhs._b2;
    }
    return (*this);
}
void OfficeBlock::setIntern(Intern &rhs)
{
    this->_intern = &rhs;
}
void OfficeBlock::setSigner(Bureaucrat &rhs)
{
    this->_b1 = &rhs;
}
void OfficeBlock::setExecutor(Bureaucrat &rhs)
{
    this->_b2 = &rhs;
}
void OfficeBlock::doBureaucracy(std::string name, std::string target)
{
    Form *form;
    form = this->_intern->makeForm(name, target);
    this->_b1->signForm(*form);
    this->_b2->executeForm(*form);
}
