#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " + this->_name + " just popped" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " + this->_name + " just died for no apparent reason !";
}

void	Victim::getPolymorphed(void)
{
	std::cout << this->_name + " has been turned into a cute little sheep" << std::endl;
}

void	Victim::introduce(void)
{
	std::cout << "I'm " + this->_name + " and I like otters !" << std::endl;
}
