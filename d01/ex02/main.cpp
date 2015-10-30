#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <cstdlib>
#include <iostream>
#include <time.h>
#include <stdlib.h>

std::string	randomName(void)
{
	std::string names[] =
	{
		"Jean", "Paul", "Pierre", "Huges", "Henry"
	};
	srand(time(NULL));
	int i = rand() % 5;
	return (names[i]);
}

void	randomChump(void)
{
	std::cout << "randomChump called" << std::endl;
	Zombie *newZombie = new Zombie(randomName());
	newZombie->z_type = "Weak";
	newZombie->announce();
	delete newZombie;
}

int		main(void)
{
	std::cout << "HEAP" << std::endl;
	randomChump();
	std::cout << "STACK" << std::endl;
	Zombie noob = noob.setZombie("Jean-Merlin");
	noob.z_type = noob.setZombieType("Belgium");
	noob.announce();
	return (0);
}
