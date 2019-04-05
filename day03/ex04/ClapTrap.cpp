#include "ClapTrap.hpp" 

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap constructor" << std::endl; 
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor" << std::endl; 
}
ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor with string" << std::endl;
	this->name = name;
}
ClapTrap::ClapTrap(ClapTrap const &rhs)
{
    std::cout << "ClapCopy constructor called" << std::endl;
	*this = rhs;
}
ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) 
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
    this->_vaul = rhs._vaul;

	return *this;
}

void ClapTrap::rangedAttack(std::string const & target)
{
    this->_vaul = this->_rangedDamege;
    std::cout << "FR4G-TP <" << this->name
		<< "> attacks <" << target
		<< "> at range, causing <" 
		<< this->_rangedDamege << "> points of damage !" << std::endl;
}
void ClapTrap::meleeAttack(std::string const & target)
{
    this->_vaul = this->_meleeDamage;
    std::cout << "FR4G-TP <" << this->name
		<< "> attacks <" << target
		<< "> at range, causing <" 
		<< this->_meleeDamage << "> points of damage !" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int    damage;

    damage = amount - this->_armour;
    if (damage > this->_hp)
    {
        this->_hp = 0;
        std::cout << this->name << ": I'm die!" << std::endl;
    }
    else
    {
        this->_hp -= damage;
        std::cout << this->name << ": I'm still alive!" << std::endl;
        std::cout << "Damage: " << damage << std::endl;
        std::cout << "HP left: " << this->_hp << " / " << this->_maxhp << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_ep < amount)
        std::cout << this->name << ": Not enough energy!" << std::endl;
    else if ((amount + this->_hp) <= 100)
    {
        this->_ep -= amount;
        this->_hp = amount + this->_hp;
        std::cout << this->name << ": Healing!" << std::endl;
        std::cout << "HP points: " << this->_hp << std::endl;
    }
    std::cout << "Energy points left: " << this->_ep << std::endl;
}
std::string ClapTrap::getName(void) const
{
    return (this->name);
}

unsigned int ClapTrap::getMeleeAttackDamage(void) const
{
    return (this->_meleeDamage);
}

unsigned int ClapTrap::getRangedAttackDamage(void) const
{
    return (this->_rangedDamege);
}

unsigned int ClapTrap::getArmourDamageReduction(void) const
{
    return (this->_armour);
}
unsigned int ClapTrap::getHP(void) const {
    return (this->_hp);
}

unsigned int ClapTrap::getMHP(void) const {
    return (this->_maxhp);
}

unsigned int ClapTrap::getEP(void) const {
    return (this->_ep);
}

unsigned int ClapTrap::getMEP(void) const {
    return (this->_maxep);
}

unsigned int ClapTrap::getLevel(void) const {
    return (this->_level);
}

