#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"


int main(void)
{
	Sorcerer brand("brand", "the Magnificent");
	Victim daniel("Daniel");
	Peon Grunt("Grunt");
	std::cout << brand << daniel << Grunt;
	brand.polymorph(daniel);
	brand.polymorph(Grunt);
	return 0;
}
