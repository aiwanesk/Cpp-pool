#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class		Weapon
{
	protected:
		std::string		_name;
		int	_damage;
		int	_cost;
	private:
		std::string	sound(void) const;
	public:
		Weapon(void);
		Weapon(Weapon const & source);
		Weapon(std::string const & name, int apcost, int damage);
		Weapon & operator=(Weapon const & rhs);
		virtual ~Weapon(void);

		virtual void	attack(void) const = 0;
		std::string		getName()const;
		int				getAPCost() const;
		int				getDamage() const;
};

#endif
