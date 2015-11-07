#include "Hero.class.hpp"

Hero::Hero(void)
{
	this->name = "Hero";
	this->hp = 3;
	this->damage = 2;
	this->x = 72;//prendre la taille de la fenetre
	this->y = 43;//prendre la taille de la fenetre et la diviser par deux;
}

Hero::Hero(std::string name, int h, int d, int x, int y)
{
	this->name = name;
	this->hp = h;
	this->damage = d;
	this->x = x;
	this->y = y;
}

Hero & Hero::operator=(Hero const & rhs)
{
	this->name = rhs.name;
	this->hp = rhs.hp;
	this->x = rhs.x;
	this->y = rhs.y;
	this->damage = rhs.damage;
	return *this;
}

Hero::Hero(Hero const & src)
{
	*this = src;
}

Hero & Hero::operator-=(int d)
{
	this->hp -= d;
	return *this;
}

int		Hero::getHp(void)
{
	return this->hp;
}

Hero::~Hero(void)
{
}

int			Hero::getX()
{
	return this->x;
}

int			Hero::getY()
{
	return this->y;
}

void		Hero::left()
{
	if (this->x > 0)
		this->x -= 1;
}

void		Hero::right()
{
	if (this->x < 100)//taille max de la fenetre
		this->x +=1;
}

void		Hero::shoot()
{
	
}
