#include "Fixed.class.hpp"

const int	Fixed::numb = 8;

Fixed::Fixed(void) 
{
	this->point = 0;
	std::cout << "Default Constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void) 
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
Fixed::Fixed(Fixed const &src) 
{
	std::cout << "Copy constructor called" << std::endl;
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
    std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->point = rhs.getRawBits();
	return *this;
}
Fixed::Fixed(const int val)
{
    this->point = val << numb;
    std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
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
