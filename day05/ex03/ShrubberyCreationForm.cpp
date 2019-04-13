#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){return ;}

ShrubberyCreationForm::~ShrubberyCreationForm(){return ;}
ShrubberyCreationForm::ShrubberyCreationForm(std::string name):
    Form("Shrubbery Creation Form", 145, 137)
{
    this->_target = name;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs):
    Form("Shrubbery Creation Form", 145, 137)
{
    *this = rhs;
}
ShrubberyCreationForm  &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    if (this != &rhs)
    {
      this->_target = rhs._target;
    }
    return *this;
}
std::string ShrubberyCreationForm::getTarget(void)
{
    return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() < 137)
    {
        std::ofstream  file;
        file.open(this->_target + "_shrubbery");
        if (file.is_open())
        {
                file   <<    "         # #### ####" << std::endl
                            << "       ### /#|### |/####" << std::endl
                        <<  "      ##/#/ ||/##/_/##/_#" << std::endl
                        <<  "   ###  /###|/ / # ###" << std::endl
                        <<  "  ##__#_## | #/###_/_####" << std::endl
                        <<  "## #### #  #| /  #### ##/##" << std::endl
                        <<  "  __#_--###`  |{,###---###-~" << std::endl
                            << "             }{" << std::endl
                            << "            }}{" << std::endl
                            << "            }}{" << std::endl
                            << "            {{}" << std::endl
                            << "   , -=-~{ .-^- _" << std::endl
                            << "            `}" << std::endl
                            << "             {" << std::endl
                            << std::endl;
        }
    }
    else
        throw(Form::UnsignedException());    
}

