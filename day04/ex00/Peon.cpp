#include "Peon.hpp"

Peon::Peon(void)
{
    this->_name = "Edward";
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
    std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(std::string name)
{
    this->_name = name;
    std::cout << "Zog zog." << std::endl;
}
Peon::Peon(Peon const &rhs)
{
    *this = rhs;
}

Peon  &Peon::operator=(Peon const &rhs)
{
   if (this != &rhs)
    {
        this->_name = rhs._name;
    }
    return *this;
}
void Peon::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a pink pony !" \
              << std::endl;
    return ;
}
