#include "Unit.class.hpp"

Unit::Unit()
{
	this->name = "Unit";
	this->hp = 2;
	this->damage = 0;
	this->x = 20;
	this->y = 20;
}

Unit::Unit(std::string name, int h, int damage, int x, int y)
{
	this->name = name;
	this->hp = h;
	this->damage = damage;
	this->x = x;
	this->y = y;
}

Unit::~Unit()
{}

int		Unit::spawn(void)
{
	std::srand(std::time(0));
	int nbr = rand() % 10;
	return nbr;
}

int	Unit::getX()
{
	return this->x;
}

int		Unit::getY()
{
	return this->y;
}

Unit	Unit::create(void)
{
	//need la taille de la fenetre
	std::srand(std::time(0));
	int		nb = rand() % 10; //la taille de la fenetre pas 19
	Unit *unit = new Unit("Unit", 1, 0, 0, nb);
	return *unit;
}

void	Unit::move()
{
	std::srand(std::time(0));
	int nbr = rand() % 2;
	if (nbr % 2 == 0 && y > 0)
		this->y -= 1;
	else if (nbr % 2 == 1 && y < 100)
		this->y +=1;
	this->x +=1;
}
