#include "human.hpp"
#include <iostream>

Human::Human(void)
{
	std::cout << "Human created" << std::endl;
}

Human::~Human(void)
{
	std::cout << "Human destroyed" << std::endl;
}

std::string Human::identify(void)
{
	return this->brain.identify();
}

Brain	Human::getBrain(void)
{
	return this->brain;
}
