#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <string>

class		ZombieEvent {

	public:
		ZombieEvent( void );
		~ZombieEvent( void );

		std::string		type;

		void			setZombieType(std::string type);
		Zombie			*newZombie(std::string name);

};

#endif
