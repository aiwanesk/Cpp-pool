#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << "," + this->_title + " is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << "," + this->_title + ", is dead.Cosequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src, std::string name, std::string title) : _name(name), _title(title)
{
	*this = src;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs)
{
	(void)rhs;
	return *this;
}

std::string Sorcerer::introduce(void) const
{
	return "I am" + this->_name + ", " + this->_title + ", and I like ponies\n";
}

void	Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

std::ostream	& operator<<(std::ostream & o, Sorcerer const & i)
{
	return o << i.introduce();
}

