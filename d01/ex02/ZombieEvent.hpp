#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class		ZombieEvent
{
	std::string		p_type;

	public:
		void	setZombieType(std::string);
		Zombie	*setZombie(std::string);
};

#endif
