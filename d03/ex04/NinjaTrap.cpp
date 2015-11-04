#include "Ninjatrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ScavTrap::ScavTrap(name)
{
	this->_name = name;
	this->_type = "NinjaTrap";
	this->_hp = 60;
	this->_ep = 120;
	this->_max_ep = 120;
	this->_level = 1;
	this->_mele_at = 60;
	this->_range_at = 5;
	this->_armor = 0;
	std::cout << "Constructor called\n" << this->_type << " created\nMy name is " << this->_name << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Destructor called\n" << this->_type << this->_name << " is destroyed" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap & f)
{
	(void)f;
	if ((this->_ep = this->_ep - 25) >= 0)
		std::cout << "Kasjdhf" << std::endl;
	else
	{
		this->_ep = 0;
		std::cout << "Im out of mana brah!" << std::endl;
	}
}

void	NinjaTrap::ninjaShoebox(NinjaTrap & n)
{
	(void)n;
	if ((this->_ep = this->_ep - 25) >= 0)
		std::cout << "Kasjdhf" << std::endl;
	else
	{
		this->_ep = 0;
		std::cout << "Im out of mana brah!" << std::endl;
	}
}

void	NinjaTrap::ninjaShoebox(ScavTrap & s)
{
	(void)s;
	if ((this->_ep = this->_ep - 25) >= 0)
		std::cout << "Kasjdhf" << std::endl;
	else
	{
		this->_ep = 0;
		std::cout << "Im out of mana brah!" << std::endl;
	}
}

void	NinjaTrap::ninjaShoebox(ClapTrap & c)
{
	(void)c;
	if ((this->_ep = this->_ep - 25) >= 0)
		std::cout << "Kasjdhf" << std::endl;
	else
	{
		this->_ep = 0;
		std::cout << "Im out of mana brah!" << std::endl;
	}
}
