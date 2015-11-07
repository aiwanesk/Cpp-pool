#ifndef BOSS_CLASS_HPP
# define BOSS_CLASS_HPP

#include "Unit.class.hpp"

class		Boss : public Unit
{
	public:
		Boss(void);
		Boss(Boss const & src);
		Boss & operator=(Boss const & rhs);
		Boss(std::string, int damage, int hp, int x, int y);
		~Boss();
};

#endif
