#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	std::cout << "HumanB created" << std::endl;
	this->name = name;
	std::cout << "Hi im " + this->name  <<std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->name;
	std::cout << " destroyed" << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->name + " is attacking with " + this->we->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->we = &weapon;
}
