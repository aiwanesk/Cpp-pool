#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class		Sorcerer
{
	protected:
		std::string _name;
		std::string _title;
		void	introduce(void);
		void	polymorph(Victim const &);
		//penser a overload pour pouvoir sortir sur toutes les sorties
	public:
		Sorcerer(std::string name, std::string type);
		~Sorcerer(void);
};

#endif
