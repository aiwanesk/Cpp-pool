#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "Weapon.hpp"

class		PlasmaRifle : public virtual Weapon
{
	private:
		std::string sound(void);
	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const & source);
		PlasmaRifle(std::string const & name, int damage , int cost);
		PlasmaRifle & operator=(PlasmaRifle const & rhs);
		~PlasmaRifle(void);
};

#endif
