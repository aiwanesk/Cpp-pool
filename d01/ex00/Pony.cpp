#include "pony.hpp"
#include <iostream>

Pony::Pony(void)
{
	std::cout << "A pony enter in Findus's Factory" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "The pony became a lasagna, or not" << std::endl;
}

void		Pony::ponyname(void)
{
	std::cout << "Name ur pony: ";
	std::cin >> this->name;
}

void		Pony::ponyage(void)
{
	std::cout << "How old is ur pony: ";
	std::cin >> this->age;
}

void		Pony::ponyiseatable(void)
{
	std::cout << "can i eat ur pony? Yes/no?: ";
	std::cin >> this->comestible;
}

void		Pony::pony_w(void)
{
	std::cout << "Pony weigth please: ";
	std::cin >> this->weigth;
}
