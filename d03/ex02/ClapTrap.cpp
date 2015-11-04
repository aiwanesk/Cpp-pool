#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->_type = "ClapTrap";
	this->_hp = 100;
	this->_max_hp = 100;
	this->_ep = 100;
	this->_max_ep = 100;
	this->_level =1 ;
	this->_mele_at = 30;
	this->_range_at = 20;
	this->_armor = 5;
	std::cout << "ClapTrap nammed " + this->_name + " created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap without name  created" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destroyed" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount = amount - this->_armor;
	this->_hp = this->_hp - amount;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << this->_name + " tooks" << amount  << " amount of damage, he has "  << this->_hp << " left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
	if (this->_hp > this->_max_hp)
		this->_hp = this->_max_hp;
	std::cout << this->_name + " was repaired and add " << this->_hp << "lefts" << std::endl;
}
