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
		std::string name;
	public:
		Hero(void);
		Hero(Hero const & src);
		Hero & operator=(Hero const & rhs);
		Hero(std::string, int damage, int hp, int x, int y);
		~Hero(void);

		int		getX();
		int		getY();
		int		tab[10][2];
		int		getHp(void);

		void	init_tab(Hero h);
		void	left();
		void	right(int max);
		void	shoot();
		void	movebullet();
		Hero & operator-=( int v);
};

#endif
