#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "Weapon.hpp"
#include "Enemy.hpp"

class			Character
{
	protected:
		std::string		_name;
		int				_ap;
		Weapon			*current;
	private:
	public:
		Character(void);
		Character(std::string const & name);
		Character(Character const & source);
		Character & operator=(Character const & rhs);
		virtual ~Character(void);
		void	recoverAP();
		void	equip(Weapon*);
		void	attack(Enemy*);
		int		getAp();
		std::string 	showatt(void);
		std::string virtual getName() const;
};

std::ostream & operator<<(std::ostream & out, Character const & in);

#endif
