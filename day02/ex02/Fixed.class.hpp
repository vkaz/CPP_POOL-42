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
		Fixed &operator=(Fixed const & rhs);
		bool operator > (Fixed const & rhs) const;
		bool operator < (Fixed const & rhs) const;
		bool operator >= (Fixed const & rhs) const;
		bool operator <= (Fixed const & rhs) const;
		bool operator == (Fixed const & rhs) const;
		bool operator != (Fixed const & rhs) const;
		Fixed operator + (Fixed const & rhs) const;
		Fixed operator - (Fixed const & rhs) const;
		Fixed operator * (Fixed const & rhs) const;
		Fixed operator / (Fixed const & rhs) const;
		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		void setRawBits(int const raw);
		int getRawBits(void) const;
		int toInt(void) const;
		float toFloat(void) const;
		static Fixed &min(Fixed &i, Fixed &a);
		static Fixed &max(Fixed &i, Fixed &a);
		static const Fixed &min(Fixed const &i, Fixed const &a);
		static const Fixed &max(Fixed const &i, Fixed const &a);

	private:
		int					point;
		static const int	numb;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & i );

#endif
