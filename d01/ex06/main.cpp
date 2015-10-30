#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int		main(int ac, char **av)
{
	(void)av;
		if (ac == 1)
		{
			Weapon club = Weapon("crude spiked club");
			HumanA bob("Bob", club);
			bob.attack();
			club.setType("some other type of club");
			bob.attack();
		}
		else
		{
			Weapon club = Weapon("crude spiked club");
			HumanB jim("jim");
			jim.setWeapon(club);
			jim.attack();
			club.setType("some other type of club");
			jim.attack();
		}
	return (0);
}
