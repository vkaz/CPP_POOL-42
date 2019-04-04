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
	std::cout << "getRawBits member function called" << std::endl;
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
