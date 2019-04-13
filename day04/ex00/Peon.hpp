#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{
private:
    std::string _name;
public:
    Peon(void);
    ~Peon(void);
    Peon(std::string name);
    Peon(Peon const &rhs);
    Peon &operator=(Peon const &rhs);
    virtual void getPolymorphed(void) const;
};

#endif
