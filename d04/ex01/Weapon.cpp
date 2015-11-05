#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string const & name, int apcost, int damage)
{
	this->_damage = damage;
	this->_cost = apcost;
	this->_name = name;
	return;
}

Weapon::Weapon(Weapon const & source)
{
	*this = source;
}

Weapon::~Weapon(void)
{
	return;
}

std::string	Weapon::sound(void) const
{
	return "SPLORSH";
}

Weapon	&	Weapon::operator=(Weapon const & rhs)
{
	this->_name = rhs._name;
	this->_damage = rhs._damage;
	this->_cost = rhs._cost;
	return *this;
}

int		Weapon::getAPCost() const
{
	return this->_cost;
}

int		Weapon::getDamage() const
{
	return this->_damage;
}

void	Weapon::attack(void) const
{
	std::cout << "Using " + this->_name + " for " << this->_cost << " and inflict " << this->_damage  << " " << this->sound() << std::endl;
	return;
}
