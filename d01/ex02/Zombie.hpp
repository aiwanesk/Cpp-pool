#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class		Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		std::string z_name;
		std::string z_type;

	void		announce(void);
};

#endif
