#include "B.hpp"

B::B(){}
B::~B(){}
B::B(B const &rhs)
{
    *this = rhs;
}
B  &B::operator=(B const &rhs)
{
    static_cast<void>(rhs);
    return *this;
}