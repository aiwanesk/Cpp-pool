#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	FragTrap pierre("pierre");
	FragTrap jacques("jacques");
	ScavTrap test("Tests");
	NinjaTrap kakashi("Kakashi");

	kakashi.rangedAttack("a pony");
	pierre.rangedAttack("un homme");
	pierre.meleeAttack("Guillaume");
	pierre.takeDamage(50);
	pierre.beRepaired(20);
	pierre.beRepaired(40);
	kakashi.takeDamage(20);
	pierre.vaulthunter_dot_exe("Jean");
	pierre.takeDamage(105);
	test.meleeAttack("un belge");
	return 0;
}
