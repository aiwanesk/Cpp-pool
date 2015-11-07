#ifndef UNIT_CLASS_HPP
# define UNIT_CLASS_HPP

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

class		Unit
{
	protected:
		std::string		name;
		int				damage;
		int				hp;
		int				x;
		int				y;
	public:
		Unit(void);
		//Unit(Unit const & src);
		Unit & operator=(Unit const & rhs);
		Unit(std::string, int damage, int hp, int x, int y);
		~Unit(void);

		int		getX();
		int		getY();

		int		spawn();
		Unit	create();
		void	move();
};

#endif
