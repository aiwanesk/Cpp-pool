#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " + name << " just popped!" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " + this->_name << " just died for no apparent reason !" << std::endl;
}

Victim::Victim(Victim const & src, std::string name) : _name(name)
{
	std::cout << "Some random victim called" + name + " just popped!" << std::endl;
	*this = src;
}

Victim & Victim::operator=(Victim const & src)
{
	(void)src;
	return *this;
}

std::string Victim::introduce(void) const
{
	return "I'm " + this->_name + " and i like otters!!!\n";
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator<<(std::ostream & out, Victim const & in)
{
	return out << in.introduce();
}
