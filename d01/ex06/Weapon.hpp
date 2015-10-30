#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class		Weapon
{
	public:
		Weapon(std::string message);
		~Weapon(void);
		std::string weapon;
		std::string const & getType(void);
		void setType(std::string message);
};

#endif
