#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "Weapon.hpp"

class		PowerFist : public virtual Weapon
{
	private:
		std::string sound(void);
	public:
		PowerFist(void);
		PowerFist(PowerFist const & source);
		PowerFist(std::string const & name, int damage , int cost);
		~PowerFist(void);
		PowerFist & operator=(PowerFist const & rhs);
};

#endif
