#ifndef UNIT_CLASS_HPP
# define UNIT_CLASS_HPP

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <ncurses.h>

class		Unit
{
	protected:
		std::string		name;
		int				damage;
		int				hp;
		int				x;
		int				y;
		int			sens;
	public:
		Unit(void);
		//Unit(Unit const & src);
		//Unit & operator=(Unit const & rhs);
		Unit(std::string, int damage, int hp, int x, int y, bool alive);
		~Unit(void);

		int		getX();
		int		getY();

		void	destroy();
		int		spawn();
		Unit	create();
		void	move(int sens);
		void	setY(int v);
};

#endif
