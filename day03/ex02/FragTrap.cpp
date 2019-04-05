#include "FragTrap.hpp"

FragTrap::FragTrap(void) 
{
    std::cout << "What's that smell? Oh wait, it's just you!" << std::endl; 
}
FragTrap::~FragTrap(void)
{
    std::cout << "I'll die the way I lived: annoying!" << std::endl; 
}
FragTrap::FragTrap(FragTrap const &src) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
FragTrap::FragTrap(std::string name) 
{
    std::cout << "FragTrap constructor with string" << std::endl;
	this->name = name;
    this->_hp = 100;
    this->_maxhp = 100;
    this->_ep = 100;
    this->_maxep = 100;
    this->_level = 1;
    this->_meleeDamage = 30;
    this->_rangedDamege = 20;
    this->_armour = 5;
    this->_laserA = 35;
    this->_woodA = 20;
    this->_racketA = 15;
    this->_funA = 30;
    this->_psyA = 35;
    this->_vaul = 0;

}
FragTrap	&FragTrap::operator=(FragTrap const &rhs) 
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
    this->_laserA = rhs._laserA;
    this->_woodA = rhs._woodA;
    this->_racketA = rhs._racketA;
    this->_funA = rhs._funA;
    this->_psyA = rhs._psyA;
    this->_vaul = rhs._vaul;

	return *this;
}

void FragTrap::laserAttack(std::string const & target)
{
    this->_vaul = this->_laserA;
    std::cout << "FR4G-TP <" << this->name
		<< "> attacks <" << target
		<< "> at laser, causing <" 
		<< this->_laserA << "> points of damage !" << std::endl;
}
void FragTrap::woodAttack(std::string const & target)
{
    this->_vaul = this->_woodA;
    std::cout << "FR4G-TP <" << this->name
		<< "> attacks <" << target
		<< "> at wood, causing <" 
		<< this->_woodA << "> points of damage !" << std::endl;
}
void FragTrap::racketAttack(std::string const & target)
{
    this->_vaul = this->_racketA;
    std::cout << "FR4G-TP <" << this->name
		<< "> attacks <" << target
		<< "> at racket, causing <" 
		<< this->_racketA << "> points of damage !" << std::endl;
}
void FragTrap::funAttack(std::string const & target)
{
    this->_vaul = this->_funA;
    std::cout << "FR4G-TP <" << this->name
		<< "> attacks <" << target
		<< "> at fun, causing <" 
		<< this->_funA << "> points of damage !" << std::endl;
}
void FragTrap::psyAttack(std::string const & target)
{
    this->_vaul = this->_psyA;
    std::cout << "FR4G-TP <" << this->name
		<< "> attacks <" << target
		<< "> at psy, causing <" 
		<< this->_psyA<< "> points of damage !" << std::endl;
}

void FragTrap::vaulhunter_dot_exe(std::string const & target)
{
    int   random;

    if (this->_ep < 25)
    {
        std::cout << this->name << ": Not enought energy" << std::endl;
        std::cout << "Energy points needed: " << 25 - this->_ep \
            << std::endl;
    }
    else
    {
        this->_ep -= 25;
        random = rand() % 5;
        if (random == 0)
            FragTrap::laserAttack(target);
        else if (random == 1)
            FragTrap::woodAttack(target);
        else if (random == 2)
            FragTrap::racketAttack(target);
        else if (random == 3)
            FragTrap::funAttack(target);
        else
            FragTrap::psyAttack(target);
    }
}

unsigned int FragTrap::getVaulHunter_dot_exeDamage(void)
{
    return (this->_vaul);
}

unsigned int FragTrap::getLaserAttackDamage(void)
{
    return (this->_laserA);
}

unsigned int FragTrap::getWoodAttackDamage(void)
{
    return (this->_woodA);
}

unsigned int FragTrap::getRacketAttackDamage(void)
{
    return (this->_racketA);
}

unsigned int FragTrap::getFunAttackDamage(void)
{
    return (this->_funA);
}

unsigned int FragTrap::getPsyAttackDamage(void)
{
    return (this->_psyA);
}
