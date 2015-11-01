#include "Human.hpp"

int		main( void ) {
	Human bob("Bob");

	bob.action("meleeAttack", "Jean");
	bob.action("rangedAttack", "Jarvan IV");
	bob.action("intimidatingShout", "Garen");
	return 0;
}
