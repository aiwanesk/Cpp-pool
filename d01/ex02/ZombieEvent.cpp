#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->p_type = type;
}

Zombie	*ZombieEvent::setZombie(std::string name)
{
	Zombie	*newzombie = new Zombie(name);
	return newzombie;
}

ZombieEvent::ZombieEvent(void)
{
	std::cout << "new Zombie" << std::endl;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "Zombie destroyed" << std::endl;
}

void		Zombie::announce(void)
{
	std::cout << "<" + this->z_name + "(" << this->z_type + ")> " << "Braiiiiiiiinnnssss"<< std::endl;
}
