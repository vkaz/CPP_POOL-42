#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <string>

class Fixed 
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const & src);
		Fixed & operator=(Fixed const & rhs);
		void setRawBits(int const raw);
		int getRawBits(void) const;

	private:
		int					point;
		static const int	numb;
};

#endif
