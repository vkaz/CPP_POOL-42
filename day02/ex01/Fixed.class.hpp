#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <string>
# include <math.h>

class Fixed 
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const & src);
		Fixed(const int val);
		Fixed(const float val);
		Fixed & operator=(Fixed const & rhs);
		void setRawBits(int const raw);
		int getRawBits(void) const;
		int toInt(void) const;
		float toFloat(void) const;

	private:
		int					point;
		static const int	numb;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & i );

#endif
