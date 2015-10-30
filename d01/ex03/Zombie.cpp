#include "Zombie.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <time.h> //supp
#include <stdlib.h> //supp
#include <stdio.h> //supp


Zombie::Zombie( void ) {
	Zombie::nbr ++;
	if (Zombie::nbr > 9)
		Zombie::nbr = 0;
	this->type = "HORDE";
	this->name = this->randomName();
}

Zombie::~Zombie( void ) {
}

std::string		Zombie::randomName( void ) const {
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
	int		nbr;

	srand(time(NULL)); //-> change into std::srand(std::time(0));
	nbr = rand() % 10 + Zombie::nbr;
	if (nbr > 9)
		nbr -= 10;
	return tab[nbr]; // change rand() into std::rand()
}

void			Zombie::announce( void ) const {
	std::cout << "<" + this->name + " ("+ this->type + ")> Braiiiiiiinnnssss..." << std::endl;
}

int		Zombie::nbr = 0;
