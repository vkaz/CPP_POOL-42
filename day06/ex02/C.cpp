#include "C.hpp"

C::C(){}
C::~C(){}
C::C(C const &rhs)
{
    *this = rhs;
}
C  &C::operator=(C const &rhs)
{
    static_cast<void>(rhs);
    return *this;
}