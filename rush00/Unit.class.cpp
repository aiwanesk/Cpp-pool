#include "Unit.class.hpp"

Unit::Unit(void)
{
	
	this->name = "Unit";
	this->hp = 1;
	this->damage = 0;
//	this->x = getX();
//	this->y = getY();
	this->x = 0;
	this->y = 0;
	this->sens = 0;
}

Unit::Unit(std::string name, int h, int damage, int x, int y, bool alive)
{
	static int p = 0;
	static int t = 0;
	this->name = name;
	this->hp = h;
	this->damage = damage;
	this->x = x + t;
	this->y = y + p;
	this->sens = alive;
	p+=1;
	if (p == 10){
		p = 0;
		t+=5;
	}
	if (t == 50)
		t = 0;
}

void	Unit::destroy()
{
	this->x = -100;
	this->y = -100;
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

void	Unit::setY(int v)
{
	this->y = y - v;
	if (this->y == 0){
		printf("You lost cause::collide\n");
//		endwin();
//		exit(0);
	}
}

Unit	Unit::create(void)
{
	//need la taille de la fenetre
	static int p = 0;
	std::srand(std::time(0));
	int		nb = (rand() % 10) + p; //la taille de la fenetre pas 19
	p++;
	if (p == 8)
		p = 0;
	Unit *unit = new Unit("Unit", 1, 0, 0, nb, 1);
	return *unit;
}

void	Unit::move(int sens)
{
	/*if ( x == 1)
		this->sens = 1;
	else if (x == 100)
		this->sens = 0;*/
	if (sens == 0)
		this->x -= 1;
	else if (sens == 1)
		this->x +=1;
	//this->x +=1;
}
