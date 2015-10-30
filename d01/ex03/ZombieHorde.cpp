#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde( int n ) {
	std::cout << "The horde is coming ..." << std::endl;
	this->n = n;
	this->horde = new Zombie[n];
}

ZombieHorde::~ZombieHorde( void ) {
	delete [] this->horde;
	std::cout << "The horde is destroyed." << std::endl;
}

void	ZombieHorde::announce( void ) const {
	int		i;

	i = -1;
	while (++i < n)
		this->horde[i].announce();
}
