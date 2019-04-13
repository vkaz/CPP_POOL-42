#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        RadScorpion(void);
        RadScorpion(const RadScorpion &src);

        ~RadScorpion(void);

        RadScorpion   &operator= (const RadScorpion &rhs);
};

#endif