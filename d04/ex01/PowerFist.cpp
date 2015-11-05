#include "PowerFist.hpp"

PowerFist::PowerFist(void) : Weapon()
{
	this->_name = "Power Fist";
	this->_damage = 50;
	this->_cost = 8;
	return;
}

PowerFist::PowerFist(std::string const & name, int damage, int cost)
{
	this->_name = name;
	this->_damage = damage;
	this->_cost = cost;
	return;
}

PowerFist::PowerFist(PowerFist const & source)
{
	*this = source;
}

PowerFist & PowerFist::operator=(PowerFist const & rhs)
{
	this->_name = rhs._name;
	this->_cost = rhs._cost;
	this->_damage = rhs._damage;
	return *this;
}

std::string	PowerFist::sound(void)
{
	return "* pschhh... SBAM";
}

PowerFist::~PowerFist(void)
{
	return;
}
