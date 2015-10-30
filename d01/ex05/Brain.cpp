#include "Brain.hpp"
#include <sstream>

Brain::Brain(void)
{
	std::cout<< "Brain created" << std::endl;
	void *add = static_cast <void *> (this);
	std::stringstream ad;
	ad << add;
	this->_add = ad.str();
	return;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructed" << std::endl;
}

std::string		Brain::identify(void)
{
	return this->_add;
}
