#include "Enemy.hpp"

Enemy::Enemy(void) : Character()
{}

Enemy::~Enemy(void)
{}

Enemy::Enemy(std::string type, int hp)
{
	this->_type = type;
	this->_hp = hp;
}

void	Enemy::takeDamage(int damage)
{
	this->_hp -= damage;
	if (this->_hp <= 0)
		delete this;
}
