#include "FragTrap.hpp"

int		main(void)
{
	FragTrap pierre("pierre");
	FragTrap jacques("jacques");

	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	jacques.rangedAttack(jean.getName());
	jean.takeDamage(jacques.getRangedDamage());
	jean.beRepaired(20);
	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	damage = jacques.vaulthunter_dot_exe(jean.getName());
	jean.takeDamage(damage);
	jacques.beRepaired(50);
	damage = jean.vaulthunter_dot_exe(jacques.getName());
	jacques.takeDamage(damage);
	damage = jean.vaulthunter_dot_exe(jacques.getName());
	jacques.takeDamage(damage);
	damage = jean.vaulthunter_dot_exe(jacques.getName());
	jacques.takeDamage(damage);
	damage = jean.vaulthunter_dot_exe(jacques.getName());
	jacques.takeDamage(damage);
	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	jean.meleeAttack(jacques.getName());
	jacques.takeDamage(jean.getMeleeDamage());
	return 0;
}
