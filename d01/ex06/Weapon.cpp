#include "Weapon.hpp"

Weapon::Weapon(std::string message)
{
	std::cout << "Weapon created" << std::endl;
	this->weapon = message;
	std::cout << this->weapon << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon Destructed" << std::endl;
}

std::string const &Weapon::getType(void)
{
	std::string &name = this->weapon;
	return name;
}

void	Weapon::setType(std::string message)
{
	this->weapon = message;
}
