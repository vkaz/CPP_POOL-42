#include "ClapTrap.hpp"
#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

SuperTrap::SuperTrap(void) 
{
    std::cout << "Constr Super" << std::endl; 
}
SuperTrap::~SuperTrap(void)
{
    std::cout << "Des Super" << std::endl; 
}
SuperTrap::SuperTrap(SuperTrap const &src):	ClapTrap(src),	FragTrap(src),	NinjaTrap(src)
{
	std::cout << "Copy constructor called Super" << std::endl;
    *this = src;
}
SuperTrap::SuperTrap(std::string name):	ClapTrap(name),	FragTrap(name),	NinjaTrap(name)
{
    std::cout << "SuperTrap constructor with string" << std::endl;
    this->_hp = FragTrap::getHP();
    this->_maxhp = FragTrap::getMHP();
    this->_ep = NinjaTrap::getEP();
    this->_maxep = NinjaTrap::getMEP();
    this->_level = 1;
    this->name = name;
    this->_meleeDamage = NinjaTrap::getMeleeAttackDamage();
    this->_rangedDamege = FragTrap::getRangedAttackDamage();
    this->_armour = FragTrap::getArmourDamageReduction();
}
SuperTrap	&SuperTrap::operator=(SuperTrap const &rhs) 
{
    this->_hp = rhs.getHP();
    this->_maxhp = rhs.getMHP();
    this->_ep = rhs.getEP();
    this->_maxep = rhs.getMEP();
    this->_level = rhs.getLevel();
    this->name = rhs.getName();
    this->_meleeDamage = rhs.getMeleeAttackDamage();
    this->_rangedDamege = rhs.getRangedAttackDamage();
    this->_armour = rhs.getArmourDamageReduction();
	return *this;
}