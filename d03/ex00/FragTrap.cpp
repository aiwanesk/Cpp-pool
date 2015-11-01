#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	std::cout << "Constructor called...\nFragTrap cretated\nMy name is " << this->_name << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " is destroyed!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at melee, causing <" << this->_mele_at << "> points of damage !" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_range_at << "> points of damage !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int		damage_dealt = this->_armor - amount;
	std::cout << "FR4G-TP <" << this->_name << "> takes <" << damage_dealt << std::endl;
	this->_hp = this->_hp - damage_dealt;
	if (_hp <= 0)
	{
		this->_hp = 0;
		FragTrap::~FragTrap();
	}
	else
	{
		std::cout << "FR4G-TP has " << this->_hp << " left" << std::endl;
	}
}
