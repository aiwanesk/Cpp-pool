#include "Character.hpp"
//#include "Enemy.hpp"

Character::Character(void)
{
	this->_ap = 40;
	return;
}

Character::Character(std::string const & name) : _name(name)
{
	return;
}

Character::Character(Character const & source)
{
	*this = source;
}

int		Character::getAp()
{
	return this->_ap;
}

std::string Character::getName() const
{
	return this->_name;
}

Character & Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	this->_ap = rhs._ap;
	this->current = rhs.current;
	return *this;
}

Character::~Character(void)
{
	return;
}

std::ostream & operator<<(std::ostream & out, Character & in)
{
	out << in.showatt();
}

void	Character::attack(Enemy *jean)
{
	if (this->current != NULL)
	{
		std::cout << this->_name + " attacks " + jean->getType() + " with " + this->current->getName() << std::endl;
		jean.takeDamage();
	}
	else
		std::cout << "Can't Attack with my hands im not a fucking Kung-Fu Panda" << std::endl;
}

void	Character::equip(Weapon *name)
{
	this->current = name;
}
