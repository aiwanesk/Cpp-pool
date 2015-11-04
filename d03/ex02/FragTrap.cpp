#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	this->_name = name;
	this->_type = "FragTrap";
	std::cout << "Constructor called...\n"<< this->_type <<"cretated\nMy name is " << this->_name << std::endl;
	this->_hp = 100;
	this->_max_hp = 100;
	this->_ep = 100;
	this->_max_ep = 100;
	this->_level = 1;
	this->_mele_at = 30;
	this->_range_at = 20;
	this->_armor = 5;
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
