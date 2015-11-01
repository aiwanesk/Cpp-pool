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
		//static cont int _frac
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
		//overload to the operator that inserts a floating point repreentation of the fixed point value into the paramameter output stream
};

std::ostream & operator<<(std::ostream & op, Fixed const & integ);

#endif
