#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>

class Base
{
public:
    Base();
    virtual ~Base();
    Base(Base const &rhs);
    Base &operator=(Base const &rhs);
};

#endif
