#include "Hero.class.hpp"

Hero::Hero(void)
{
	this->name = "Hero";
	this->hp = 3;
	this->damage = 2;
	this->x = 0;//prendre la taille de la fenetre
	this->y = 0;//prendre la taille de la fenetre et la diviser par deux;
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
	if (this->x > 1)
		this->x -= 1;
}

void		Hero::right(int max)
{
	if (this->x < max - 2)//taille max de la fenetre
		this->x +=1;
}

void		Hero::init_tab(Hero h){
	int i = 0;
	while (h.tab[i]){
		h.tab[i][0] = 0;
		h.tab[i][1] = -1;
		i++;
	}
}

void		Hero::shoot()
{
	static bool t = 0;
	bool shoot = 0;
	if (t == 0){
		init_tab(*this);
		t = 1;
		}
	int i = 0;
	while (i < 10)
	{
		if (tab[i][1] != -1 && shoot == 0)
		{
			this->tab[i][0] = this->getX();
			this->tab[i][1] = this->getY() + 1;
			shoot = 1;
		}
		i++;
	}
}

void	Hero::movebullet()
{
	int i = 0;
	while (i < 10)
	{
	if (tab[i][1] != -1)
		this->tab[i][1] += 1;
	if (this->tab[i][0] == 100)//max_size
		tab[i][1] = -1;
	i++;
	}
}
