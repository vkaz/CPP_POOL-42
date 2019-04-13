#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant(void);
        SuperMutant(const SuperMutant &src);

        ~SuperMutant(void);

        SuperMutant   &operator= (const SuperMutant &rhs);

        virtual void  takeDamage(int damage);
};

#endif