#include "Fixed.class.hpp"

const int	Fixed::numb = 8;

Fixed::Fixed(void) 
{
	this->point = 0;
	return ;
}

Fixed::~Fixed(void) 
{
	return ;
}
Fixed::Fixed(Fixed const &src) 
{
	*this = src;
	return ;
}

int			Fixed::getRawBits(void) const 
{
	return this->point;
}

void		Fixed::setRawBits(int const raw) 
{
	this->point = raw;
}

Fixed	&Fixed::operator=(Fixed const &rhs) 
{
	if (this != &rhs)
		this->point = rhs.getRawBits();
	return *this;
}
Fixed::Fixed(const int val)
{
    this->point = val << numb;
    return ;
}

Fixed::Fixed(const float value)
{
    this->point = roundf(value * (1 << numb));
    return ;
}


float 	Fixed::toFloat(void) const
{
	return ((float)(this->point) / (1 << numb));
}

int 	Fixed::toInt(void) const
{
	return ((int)(this->point >> numb));
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return (o);
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->point > rhs.point);
}
bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->point < rhs.point);
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->point >= rhs.point);
}
bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->point <= rhs.point);
}
bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->point == rhs.point);
}
bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->point != rhs.point);
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
    return (Fixed(this->toFloat() + rhs.toFloat()));
}
Fixed	Fixed::operator-(Fixed const &rhs) const
{
   return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
    return (Fixed(this->toFloat() * rhs.toFloat()));
}
Fixed	Fixed::operator/(Fixed const &rhs) const
{
    return (Fixed(this->toFloat() / rhs.toFloat()));
}
Fixed	&Fixed::operator++(void) 
{
	this->point += 1;
	return *this;
}
Fixed	&Fixed::operator--(void) 
{
   this->point -= 1;
	return *this;
}
Fixed	Fixed::operator++(int) 
{
	Fixed prev = *this;
	++*this;
	return prev;
}
Fixed	Fixed::operator--(int)
{
   	Fixed prev = *this;
	--*this;
	return prev;
}
Fixed  &Fixed::min(Fixed &i, Fixed &a)
{
	return (i < a ? i : a);
}
Fixed &Fixed::max(Fixed &i, Fixed &a)
{
	return (i > a ? i : a);
}
Fixed const &Fixed::min(Fixed const &i,Fixed const &a)
{
	return (i < a ? i : a);
}
Fixed const &Fixed::max(Fixed const &i,Fixed const &a)
{
	return (i > a ? i : a);
}
