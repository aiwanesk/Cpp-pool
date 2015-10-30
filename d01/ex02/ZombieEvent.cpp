#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <string>

ZombieEvent::ZombieEvent( void ) {
}

ZombieEvent::~ZombieEvent( void ) {
}

void		ZombieEvent::setZombieType(std::string type) {
	this->type = type;
}

Zombie		*ZombieEvent::newZombie(std::string name) {
	Zombie *ret = new Zombie(name, this->type);
	return ret;
}
