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

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->_hp = this->_hp + amount;
	if (this->_hp > 100)
		this->_hp = 100;
	std::cout << "FR4G-TP <" << this->_name << "> is repaired is new amount of hp is " << this->_hp << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at melee, causing <" << this->_mele_at << "> points of damage !" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_range_at << "> points of damage !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int		damage_dealt = amount - this->_armor ;
	std::cout << "FR4G-TP <" << this->_name << "> takes <" << damage_dealt << ">" << std::endl;
	this->_hp = this->_hp - damage_dealt;
	if (_hp <= 0)
	{
		this->_hp = 0;
		ScavTrap::~ScavTrap();
	}
	else
	{
		std::cout << "FR4G-TP has " << this->_hp << " left" << std::endl;
	}
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
