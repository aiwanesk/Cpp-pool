#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string.h>
#include <stdio.h>

class			Brain
{
	private:
		std::string _add;

	public:
		Brain(void);
		~Brain(void);
		std::string identify(void);
};

#endif
