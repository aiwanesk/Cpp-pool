#include "pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony		*pony = new Pony();

	pony->ponyname();
	std::cout << "Pony->name: " << pony->name << std::endl;
	pony->ponyage();
	std::cout << "Pony->age: " << pony->age << std::endl;
	pony->pony_w();
	std::cout << "Pony->weigth: " << pony->weigth << std::endl;
	pony->ponyiseatable();
	std::cout << "Pony->comestible: " << pony->comestible << std::endl;
	delete pony;
}

void	ponyOnTheStack(void)
{
	Pony	pony;
	pony.ponyname();
	std::cout << "Pony->name: " << pony.name << std::endl;
	pony.ponyage();
	std::cout << "Pony->age: " << pony.age << std::endl;
	pony.pony_w();
	std::cout << "Pony->weigth: " << pony.weigth << std::endl;
	pony.ponyiseatable();
	std::cout << "Pony->comestible: " << pony.comestible << std::endl;
	return;
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
