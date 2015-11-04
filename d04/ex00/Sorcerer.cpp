#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name + ", " + this->_title + ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name + ", " + this->_title + ". Consequences will never be the same !";
}

void	Sorcerer::introduce(void)
{
	std::cout << "I am " + this->_name + ", " + this->_title + "and I like ponies !";
}
