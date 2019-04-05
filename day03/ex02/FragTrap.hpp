#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(void);
    ~FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const &src);
    FragTrap &operator=(FragTrap const &rhs);
    
    void laserAttack(std::string const & target);
    void woodAttack(std::string const & targer);
    void racketAttack(std::string const & target);
    void funAttack(std::string const & targer);
    void psyAttack(std::string const & targer);
    void vaulhunter_dot_exe(std::string const & target);
    unsigned int getVaulHunter_dot_exeDamage(void);
    unsigned int getLaserAttackDamage(void);
    unsigned int getWoodAttackDamage(void);
    unsigned int getRacketAttackDamage(void);
    unsigned int getFunAttackDamage(void);
    unsigned int getPsyAttackDamage(void);

private:
    unsigned int  _laserA;
    unsigned int  _woodA;
    unsigned int  _racketA;
    unsigned int  _funA;
    unsigned int  _psyA;
};

#endif
