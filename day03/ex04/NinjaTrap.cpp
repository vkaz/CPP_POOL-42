#include "NinjaTrap.hpp" 


NinjaTrap::NinjaTrap(void) 
{
    std::cout << "NinjaTrap constructor" << std::endl; 
}
NinjaTrap::~NinjaTrap(void)
{
    std::cout << "NinjaTrap destructor" << std::endl; 
}
NinjaTrap::NinjaTrap(NinjaTrap const &src) 
{
	std::cout << "NinjaCopy constructor called" << std::endl;
	*this = src;
}
NinjaTrap::NinjaTrap(std::string name) 
{
    std::cout << "NinjaTrap constructor with string" << std::endl;
	this->name = name;
    this->_hp = 60;
    this->_maxhp = 60;
    this->_ep = 120;
    this->_maxep = 120;
    this->_level = 1;
    this->_meleeDamage = 60;
    this->_rangedDamege = 5;
    this->_armour = 0;
}
NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs) 
{
	this->name = rhs.name;
    this->_hp = rhs._hp;
    this->_maxhp = rhs._maxhp;
    this->_ep = rhs._ep;
    this->_maxep = rhs._maxep;
    this->_level = rhs._level;
    this->_meleeDamage = rhs._meleeDamage;
    this->_rangedDamege = rhs._rangedDamege;
    this->_armour = rhs._armour;

	return *this;
}
void			NinjaTrap::ninjaShoebox(FragTrap &target) const
{
	std::cout << name << " uses Attack on FragTrap!"<< target.getName() << std::endl;
}

void			NinjaTrap::ninjaShoebox(ScavTrap &target) const
{
	std::cout << name << "uses Attack on ScavTrap@!"<< target.getName() << std::endl;
}
void			NinjaTrap::ninjaShoebox(ClapTrap &target) const
{
	std::cout << name << " uses Attack on ClapTrap!"<< target.getName() << std::endl;
}

void			NinjaTrap::ninjaShoebox(NinjaTrap &target) const
{
	std::cout << name << "uses Attack on NinjaTrap@!"<< target.getName() << std::endl;
}
