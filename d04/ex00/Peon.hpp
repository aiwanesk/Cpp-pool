#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class			Peon : public Victim
{
	public:
		Peon(std::string name);
		~Peon(void);
		Peon(Peon const & src, std::string name);
		Peon & operator=(Peon const & rhs);
		virtual void getPolymorphed(void)const;
};

std::ostream & operator<<(std::ostream & out, Peon const & in);

#endif
