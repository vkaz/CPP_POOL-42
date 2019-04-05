#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap
{
public:
    FragTrap(void);
    ~FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const &src);
    FragTrap &operator=(FragTrap const &rhs);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & targer);
    void laserAttack(std::string const & target);
    void woodAttack(std::string const & targer);
    void racketAttack(std::string const & target);
    void funAttack(std::string const & targer);
    void psyAttack(std::string const & targer);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulhunter_dot_exe(std::string const & target);
    std::string getName(void);
    unsigned int getMeleeAttackDamage(void);
    unsigned int getRangedAttackDamage(void);
    unsigned int getArmourDamageReduction(void);
    unsigned int getVaulHunter_dot_exeDamage(void);
    unsigned int getLaserAttackDamage(void);
    unsigned int getWoodAttackDamage(void);
    unsigned int getRacketAttackDamage(void);
    unsigned int getFunAttackDamage(void);
    unsigned int getPsyAttackDamage(void);

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
    unsigned int  _laserA;
    unsigned int  _woodA;
    unsigned int  _racketA;
    unsigned int  _funA;
    unsigned int  _psyA;
    unsigned int  _vaul;
};

#endif
