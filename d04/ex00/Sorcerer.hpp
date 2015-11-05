#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class			Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer(void);
		Sorcerer(void);
		Sorcerer (Sorcerer const & src, std::string name, std::string title);
		Sorcerer & operator=(Sorcerer const &rhs);
		void polymorph(Victim const &) const;
		std::string introduce(void) const;

	private:
		std::string _name;
		std::string _title;
};

std::ostream & operator<<(std::ostream & out, Sorcerer const & in);

#endif
