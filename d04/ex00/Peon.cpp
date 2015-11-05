#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src,std::string name) : Victim(name)
{
	std::cout << "(Peon) Some random victim called " + name + " just poppped!" << std::endl;
	*this = src;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark.." << std::endl;
}

Peon & Peon::operator=(Peon const & src)
{
	(void)src;
	return *this;
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}

std::ostream & operator<<(std::ostream & out, Peon const & in)
{
	return out << in.introduce();
}
