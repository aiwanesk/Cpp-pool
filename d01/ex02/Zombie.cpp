#include "zombie.hpp"

Zombie::Zombie(std::string name)
{
	std::cout << "A Zombie is created" << std::endl;
	this->z_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "A Zombie died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" + this->z_name + "(" << this->z_type + ")>" << "Braiiiiiiiinnnssss"<< std::endl;
}
