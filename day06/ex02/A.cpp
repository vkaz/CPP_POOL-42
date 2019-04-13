#include "A.hpp"

A::A(){}
A::~A(){}
A::A(A const &rhs)
{
    *this = rhs;
}
A  &A::operator=(A const &rhs)
{
    static_cast<void>(rhs);
    return *this;
}