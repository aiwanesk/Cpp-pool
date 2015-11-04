#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class		NinjaTrap : public ScavTrap
{
	public:
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		void	ninjaShoebox(ClapTrap & c);
		void	ninjaShoebox(NinjaTrap & n);
		void	ninjaShoebox(FragTrap & f);
		void	ninjaShoebox(ScavTrap & s);
};

//ajouter pour les functions standard le type:w

#endif
