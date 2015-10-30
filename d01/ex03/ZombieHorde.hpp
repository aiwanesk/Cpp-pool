#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class		ZombieHorde{

	public:
		ZombieHorde( int n );
		~ZombieHorde();

		Zombie *horde;
		int		n;

		void	announce() const ;

};

#endif
