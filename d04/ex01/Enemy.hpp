#ifndef ENEMY_HPP
# define ENEMY_HPP

#include "Character.hpp"

class		Enemy : public Character
{
	protected:
		int		_hp;
		std::string _type;
	public:
		Enemy(void);
		Enemy(std::string type, int hp);
		~Enemy(void);
		void	takeDamage(int damage);
};

#endif
