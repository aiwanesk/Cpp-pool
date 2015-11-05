#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "Weapon.hpp"

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
		std::string virtual getName() const;
};

#endif
