#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class	HumanA
{
	public:
		HumanA(std::string name, Weapon &tools);
		~HumanA(void);
		std::string name;
		void attack(void);
		Weapon& we;
};

#endif
