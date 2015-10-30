#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &tools) : name(name), we(tools)
{
	std::cout << "HumanA created" << std::endl;
	std::cout << "Hi im " + this->name + "im using this weapon:" + this->we.getType() <<std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << this->name;
	std::cout << " destroyed" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->name + " is attacking with " + this->we.getType() << std::endl;
}
