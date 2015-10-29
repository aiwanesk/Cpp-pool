#include <iostream>

void	megaphone(char *str)
{
	int		i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			std::cout << (char)(str[i] - 32);
		else
			std::cout << str[i];
		i++;
	}
}

int		main(int ac, char **av)
{
	int		i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (av[i])
		{
			megaphone(av[i]);
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}
