#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class		Victim
{
	protected:
		std::string _name;
		void	introduce(void); // pareil
		void	getPolymorphed(void);// ca doit etre une methode 
	public:
		Victim(std::string name);
		~Victim(void);
};

#endif
