#ifndef HERO_CLASS_HPP
# define HERO_CLASS_HPP

#include <iostream>

class			Hero
{
	protected:
		int		hp;
		int		x;
		int		damage;
		int		y;
		int		tab[10][2];
		std::string name;
	public:
		Hero(void);
		Hero(Hero const & src);
		Hero & operator=(Hero const & rhs);
		Hero(std::string, int damage, int hp, int x, int y);
		~Hero(void);

		int		getX();
		int		getY();
		int		getHp(void);

		void	left();
		void	right();
		void	shoot();
		Hero & operator-=( int v);
};

#endif
