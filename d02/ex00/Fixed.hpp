#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class		Fixed
{
	private:
		int					storage;
		static const int	frac = 0;
	public:
		Fixed(void);
		Fixed(Fixed const & source);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed	&operator=(Fixed const & rhs);
};

#endif
