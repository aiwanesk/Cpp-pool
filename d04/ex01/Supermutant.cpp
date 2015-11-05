#include "Supermutant.hpp"

Supermutant::Supermutant(void) : Enemy()
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	this->_hp = 170;
	this->_type = "Supermutant";
}

Supermutant::~Supermutant(void)
{
	std::cout << "Aaaargh..." << std::endl;
}

void	Supermutant::takeDamage(int damage)
{
	damage -= 3;
	this->_hp -= damage;
	if (this->_hp <= 0)
		delete this;
}

Supermutant::Supermutant(std::string name, int hp)
{
	this->_hp = hp;
	this->_name = name;
}

Supermutant::Supermutant(Supermutant const & src)
{
	*this = src;
}
