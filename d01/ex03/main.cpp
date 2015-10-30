#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <ctime>
#include <iostream>
#include <string>
#include <time.h> // supp
#include <stdlib.h> // supp
#include <stdio.h> //supp

void	randomChump( void ) {

	std::string		tab[] = {
		"Michel",
		"Jean",
		"Bernard",
		"Nathan",
		"ZombieBatman",
		"SuperZombie",
		"Brigitte",
		"Bobby",
		"Zorro",
		"Kenny",
	};

	srand(time(NULL)); //-> change into std::srand(std::time(0));
	ZombieEvent event = ZombieEvent();
	event.setZombieType("Random");
	Zombie *randomZombie = event.newZombie(tab[(rand() % 10)]); // change rand() into std::rand()
	randomZombie->announce();
	delete randomZombie;
}

int		main( void )
{
	std::cout << "On the stack" << std::endl;
	Zombie bob = Zombie("Bob", "MAD");
	bob.announce();
	std::cout << "On the heap" << std::endl;
	randomChump();
	return 0;
}
