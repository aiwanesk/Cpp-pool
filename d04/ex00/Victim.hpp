#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class		Victim
{
	public:
		Victim(std::string name);
		~Victim(void);
		Victim(Victim const & src, std::string name);
		Victim & operator=(Victim const & rhs);
		std::string		introduce(void) const;
		virtual void getPolymorphed(void) const;
	protected:
			std::string _name;
};

std::ostream & operator<<(std::ostream & out, Victim const & in);

#endif
