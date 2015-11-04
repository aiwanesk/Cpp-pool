#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class		ClapTrap
{
	protected:
		int _hp;
		int _max_hp;
		int _ep;
		int _max_ep;
		int _level;
		std::string _name;
		int _mele_at;
		int _range_at;
		int _armor;
		std::string _type;
	public:
		ClapTrap(std::string name);
		ClapTrap(void);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void displayInfo(void);
};

#endif
