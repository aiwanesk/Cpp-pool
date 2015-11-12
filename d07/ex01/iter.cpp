template < typename T , typename U, typename V >
void iter (T x, U y, V ft)
{
	U		i;

	i = 0;
	while (i != y)
	{
		ft(x[i]);
		i++;
	}
}

#include <iostream>

void Print_inc(int entier)
{
	std::cout << entier + 1 << std::endl;
}

void Print(int entier)
{
	std::cout << entier << std::endl;
}

int main(void)
{
	int tab[10] = {0, 34, 2, 10, 4, 5, 16, 7, 8, -50};


	::iter(tab, 10, Print);
	std::cout << std::endl << std::endl << "same but incremented by one" << std::endl;
	::iter(tab, 10, Print_inc);
	std::cout << std::endl;
	return (0);
}
