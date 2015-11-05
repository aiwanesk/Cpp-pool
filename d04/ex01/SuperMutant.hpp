#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class				Supermutant : public Enemy
{
	Supermutant(void);
	~Supermutant(void);
	Supermutant(std::string name, int hp);
	Supermutant(Supermutant const & src);
	Supermutant & operator=(Supermutant const & rhs);
	void	takeDamage(int damage);
};

#endif
