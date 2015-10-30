#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(std::string name, std::string type): name(name), type(type) {
}

Zombie::~Zombie( void ) {
}

void		Zombie::announce( void ) const {
	std::cout << "<" + this->name + " ("+ this->type + ")> Braiiiiiiinnnssss..." << std::endl;
}
