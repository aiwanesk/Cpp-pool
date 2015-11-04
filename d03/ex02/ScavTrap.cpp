#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : FragTrap::FragTrap(name)
{
	this->_name = name;
	this->_type = "ScavTrap";
	std::cout << "Constructor called...\n"<< this->_type <<"cretated\nMy name is " << this->_name << std::endl;
	this->_hp = 100;
	this->_max_hp = 100;
	this->_ep = 50;
	this->_level = 1;
	this->_max_ep = 50;
	this->_mele_at = 20;
	this->_range_at = 15;
	this->_armor = 3;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " is destroyed!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at melee, causing <" << this->_mele_at << "> points of damage !" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_range_at << "> points of damage !" << std::endl;
}

void	ScavTrap::challengeNewcomer(void)
{
	srand(time(NULL));
	int	random = rand() % 5;
	std::string tab[] = {
		"Kawabunga",
		"Lolxd",
		"MDR",
		"PDPDPD",
		"Je ne sais pas"
	};
	std::cout << this->_name << "does this challenge " << tab[random] << std::endl;
}
