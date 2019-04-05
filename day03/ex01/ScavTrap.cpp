 #include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) 
{
    std::cout << "ScavTrap constructor" << std::endl; 
}
ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor" << std::endl; 
}
ScavTrap::ScavTrap(ScavTrap const &src) 
{
	std::cout << "ScavCopy constructor called" << std::endl;
	*this = src;
}
ScavTrap::ScavTrap(std::string name) 
{
    std::cout << "ScavTrap constructor with string" << std::endl;
	this->name = name;
    this->_hp = 100;
    this->_maxhp = 100;
    this->_ep = 50;
    this->_maxep = 50;
    this->_level = 1;
    this->_meleeDamage = 20;
    this->_rangedDamege = 15;
    this->_armour = 3;
    this->_vaul = 0;

}
ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) 
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

void ScavTrap::rangedAttack(std::string const & target)
{
    this->_vaul = this->_rangedDamege;
    std::cout << "FR4G-TP Scave chellenge <" << this->name
		<< "> attacks <" << target
		<< "> at range, causing <" 
		<< this->_rangedDamege << "> points of damage !" << std::endl;
}
void ScavTrap::meleeAttack(std::string const & target)
{
    this->_vaul = this->_meleeDamage;
    std::cout << "FR4G-TP Scave chellenge <" << this->name
		<< "> attacks <" << target
		<< "> at range, causing <" 
		<< this->_meleeDamage << "> points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
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
void ScavTrap::beRepaired(unsigned int amount)
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
void ScavTrap::chellengeNewcomer(std::string const & target)
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
            std::cout << "Jack: Claptrap -- start bootup sequence."<< target << std::endl;
        else if (random == 1)
            std::cout << "Claptrap: Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!"<< target << std::endl;
        else if (random == 2)
            std::cout << "Jack: NO! Son of a... HEY! You! Yeah yeah, Claptrap unit!"<< target << std::endl;
        else if (random == 3)
            std::cout << "Claptrap: I can do more than open doors sir! We CL4P-TP units can be programmed to do anything from open doors to ninja-sassinate highly important Janitory officals!"<< target << std::endl;
        else
            std::cout << "Engineer Dockett: I mean exactly that John. All CL4P-TP units have a built in failsafe that prevents them from being tampered with."<< target << std::endl;            
    }
}
std::string ScavTrap::getName(void)
{
    return (this->name);
}

unsigned int ScavTrap::getMeleeAttackDamage(void)
{
    return (this->_meleeDamage);
}

unsigned int ScavTrap::getRangedAttackDamage(void)
{
    return (this->_rangedDamege);
}

unsigned int ScavTrap::getArmourDamageReduction(void)
{
    return (this->_armour);
}

unsigned int ScavTrap::getchellengeNewcomer(void)
{
    return (this->_vaul);
}
