#include "Base.hpp"

Base::Base(){}
Base::~Base(){}
Base::Base(Base const &rhs)
{
    *this = rhs;
}
Base  &Base::operator=(Base const &rhs)
{
    static_cast<void>(rhs);
    return *this;
}
