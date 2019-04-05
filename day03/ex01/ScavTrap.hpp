#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{
public:
    ScavTrap(void);
    ~ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &src);
    ScavTrap &operator=(ScavTrap const &rhs);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & targer);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void chellengeNewcomer(std::string const & target);
    std::string getName(void);
    unsigned int getMeleeAttackDamage(void);
    unsigned int getRangedAttackDamage(void);
    unsigned int getArmourDamageReduction(void);
    unsigned int getchellengeNewcomer(void);

private:
    std::string   name;
    unsigned int  _hp;
    unsigned int  _maxhp;
    unsigned int  _ep;
    unsigned int  _maxep;
    unsigned int  _level;
    unsigned int  _meleeDamage;
    unsigned int  _rangedDamege;
    unsigned int  _armour;
    unsigned int  _vaul;
};

#endif
