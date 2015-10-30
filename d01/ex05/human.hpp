#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "brain.hpp"

class		Human
{
	public:
		Human(void);
		~Human(void);
		Brain brain;
		std::string identify(void);
		Brain getBrain(void);
};

#endif
