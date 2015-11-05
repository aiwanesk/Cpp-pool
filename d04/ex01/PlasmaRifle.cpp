#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : Weapon()
{
	this->_name = "Plasma Rifle";
	this->_damage = 21;
	this->_cost = 5;
	return;
}

PlasmaRifle::PlasmaRifle(std::string const & name, int damage, int cost)
{
	this->_name = name;
	this->_damage = damage;
	this->_cost = cost;
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & source)
{
	*this = source;
}

std::string	PlasmaRifle::sound(void)
{
	return "* piouuu piouuu piouuu*";
}

PlasmaRifle &		PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	this->_name = rhs._name;
	this->_cost = rhs._cost;
	this->_damage = rhs._damage;
	return *this;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return;
}
