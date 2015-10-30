#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class	HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		std::string name;
		void attack(void);
		void setWeapon(Weapon &weapon);
		Weapon *we;
};

#endif
