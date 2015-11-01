#include "Human.hpp"

Human::Human( std::string name ): name(name) {
	this->nbrAction = 3;
	std::cout << "Wild " + this->name + " appeared!" << std::endl;
}

Human::~Human( void ) {
	std::cout << this->name + " has been defeated." << std::endl;
}

Action		Human::tab[] = {
				{"meleeAttack", &Human::meleeAttack},
				{"rangedAttack", &Human::rangedAttack},
				{"intimidatingShout", &Human::intimidatingShout}
			};

void		Human::action( std::string const & action_name, std::string const & target) {
	int		i;

	i = -1;
	while (++i < this->nbrAction)
		if (this->tab[i].name == action_name)
			(this->*tab[i].f)(target);
}

void		Human::meleeAttack( std::string const & target) {
		std::cout << this->name + " attack " + target + " with a melee attack!" << std::endl;
}

void		Human::rangedAttack( std::string const & target) {
		std::cout << this->name + " attack " + target + " with a ranged attack!" << std::endl;
}

void		Human::intimidatingShout( std::string const & target) {
		std::cout << this->name + " intimidate " + target + "!" << std::endl;
}
