#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class		SuperTrap : public virtual NinjaTrap, public virtual FragTrap
{
	public:
		SuperTrap(std::string name);
		~SuperTrap(void);
		SuperTrap(SuperTrap const & src);
		SuperTrap(void);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
};

#endif
