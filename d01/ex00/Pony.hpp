#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class		Pony
{
	public:
		Pony(void);
		~Pony(void);
		std::string		name;
		std::string		age;
		std::string		comestible;
		std::string		weigth;

	void	ponyname(void);
	void	ponyage(void);
	void	ponyiseatable(void);
	void	pony_w(void);
};

#endif
