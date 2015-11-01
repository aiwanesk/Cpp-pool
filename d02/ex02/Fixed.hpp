#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <cstring>

class		Fixed
{
	private:
		int			_storage;
		const int	_frac;
	public:
		Fixed(void);
		Fixed(const int param);
		Fixed(const float param_f);
		Fixed(Fixed const & source);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed	&operator=(Fixed const & rhs);
		float	toFloat(void) const;
		int		toInt(void) const;
		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;
		Fixed	operator+(Fixed const & rhs) const;
		Fixed	operator-(Fixed const & rhs) const;
		Fixed	operator*(Fixed const & rhs) const;
		Fixed	operator/(Fixed const & rhs) const;
		Fixed	&operator++(void);
		Fixed	operator++(int);
		static Fixed &max(Fixed a, Fixed b);
		static Fixed &min(Fixed a, Fixed b);
};

std::ostream & operator<<(std::ostream & op, Fixed const & integ);

#endif
