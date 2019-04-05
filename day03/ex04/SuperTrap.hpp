#ifndef SUPERTRAP_H
# define SUPERTRAP_H

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{
public:
    SuperTrap(void);
    ~SuperTrap(void);
    SuperTrap(std::string name);
    SuperTrap(SuperTrap const &src);
    SuperTrap &operator=(SuperTrap const &rhs);
};


#endif
