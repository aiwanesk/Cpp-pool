#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "FragTrap.hpp"

class	ScavTrap : public FragTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	challengeNewcomer(void);
};

#endif
