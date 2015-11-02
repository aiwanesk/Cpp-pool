#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class	FragTrap
{
	protected:
		int		_hp;
		int		_max_hp;
		int		_ep;
		int		_max_ep;
		int		_level;
		std::string		_name;
		int		_mele_at;
		int		_range_at;
		int		_armor;
		std::string	_type;
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);
};

#endif
