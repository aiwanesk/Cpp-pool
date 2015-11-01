#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class	FragTrap
{
	private:
		int		_hp = 100;
		int		_max_hp = 100;
		int		_ep = 100;
		int		_max_ep = 100;
		int		_level = 1;
		std::string		_name;
		int		_mele_at = 30;
		int		_range_at = 20;
		int		_armor = 5;
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
