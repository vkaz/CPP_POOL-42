#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
    std::string   name;
    unsigned int  _hp;
    unsigned int  _maxhp;
    unsigned int  _ep;
    unsigned int  _maxep;
    unsigned int  _level;
    unsigned int  _meleeDamage;
    unsigned int  _rangedDamege;
    unsigned int  _armour;
    unsigned int _vaul;
public:
    ClapTrap(void);
    ~ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &rhs);
    ClapTrap &operator=(ClapTrap const &rhs);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & targer);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName(void) const;
    unsigned int getMeleeAttackDamage(void) const;
    unsigned int getRangedAttackDamage(void) const;
    unsigned int getArmourDamageReduction(void) const;
    unsigned int getLevel(void) const;
    unsigned int getMEP(void) const;
    unsigned int getEP(void) const;
    unsigned int getMHP(void) const;
    unsigned int getHP(void) const;
};




#endif
