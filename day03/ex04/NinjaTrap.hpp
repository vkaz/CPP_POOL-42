#ifndef NINJATRAP_HPP 
# define NINJATRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class NinjaTrap : virtual public ClapTrap
{
public:
    NinjaTrap(void);
    ~NinjaTrap(void);
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const &src);
    NinjaTrap &operator=(NinjaTrap const &rhs);
    void ninjaShoebox(FragTrap &target) const;
	void ninjaShoebox(ScavTrap &target) const;
    void ninjaShoebox(ClapTrap &target) const;
	void ninjaShoebox(NinjaTrap &target) const;
};

#endif
