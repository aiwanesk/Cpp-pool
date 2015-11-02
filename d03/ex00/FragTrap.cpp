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

void	FragTrap::beRepaired(unsigned int amount)
{
	this->_hp = this->_hp + amount;
	if (this->_hp > 100)
		this->_hp = 100;
	std::cout << "FR4G-TP <" << this->_name << "> is repaired is new amount of hp is " << this->_hp << std::endl;
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

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_ep < 25)
	{
		std::cout << this->_name << "doesnt have enough energy to launch a random attack" << std::endl;
		return ;
	}
	this->_ep = this->_ep - 25;
	srand(time(NULL));
	int	random = rand() % 5;
	std::string tab[] = {
		"Kawabunga",
		"Lolxd",
		"MDR",
		"PDPDPD",
		"Je ne sais pas"
	};
	std::cout << this->_name << "uses a random attack <" << tab[random] << "> on " << target << std::endl;
}
