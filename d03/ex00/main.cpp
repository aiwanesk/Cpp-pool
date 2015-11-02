#include "FragTrap.hpp"

int		main(void)
{
	FragTrap pierre("pierre");
	FragTrap jacques("jacques");

	pierre.rangedAttack("un homme");
	pierre.meleeAttack("Guillaume");
	pierre.takeDamage(50);
	pierre.beRepaired(20);
	pierre.beRepaired(40);
	pierre.vaulthunter_dot_exe("Jean");
	return 0;
}
