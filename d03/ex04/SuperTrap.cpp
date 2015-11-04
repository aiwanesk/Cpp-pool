#include "SuperTrap.hpp"

SuperTrap::SuperTrap(SuperTrap const & src)
{
	*this = src;
	std::cout << "laskjd" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5)
{
}

SuperTrap::SuperTrap(void)
{

}

SuperTrap::~SuperTrap(void)
{
	std::cout << "dest" << std::endl;
}

void	SuperTrap::rangedAttack(std::string const & target)
{}

void	SuperTrap::meleeAttack(std::string const & target)
{}
