#include "Character.hpp"
#include "Weapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
       Character* zaz = new Character("zaz");
	          std::cout << *zaz;
			  //Enemy* b = new RadScorpion();
			  Weapon* pr = new PlasmaRifle();
			  Weapon* pf = new PowerFist();
			  zaz->equip(pr);
			  std::cout << *zaz;
			  zaz->equip(pf);
			  std::cout << *zaz;
			  zaz->equip(pr);
			  std::cout << *zaz;
			  std::cout << *zaz;
			  std::cout << *zaz;
			  return 0; }
