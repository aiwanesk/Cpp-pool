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
};

std::ostream & operator<<(std::ostream & op, Fixed const & integ);

#endif
