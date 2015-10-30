#include <sstream>
#include <iostream>
#include <fstream>
#include <stdio.h>

int		ft_strcmp(char *s1, std::string s2)
{
	int		i = 0;
	if (!s1 || s2[0] == '\0')
		return -1;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return -1;
		i++;
	}
	return 0;
}

void	go(char *str, std::string s1, char *s2)
{
	std::ifstream ifs(str);
	std::string loop;
	std::string salope;
	if (strlen(str) == 0 || !s1.length() || !strlen(s2))
	{
		std::cout<<"no empty" << std::endl;
		return;
	}
	salope = str;
	salope += ".replace";
	std::ofstream ofs(salope);
	while (std::getline(ifs, loop))
	{
		int pos = 0;
		while ((pos = loop.find(s1, pos)) != std::string::npos)
		{
			pos.replace(pos, s1.length(), s2);
			pos += s2.length();
		}
		ofs << loop << std::endl;
	}
	/*while (!ifs.eof())
	{
		ifs >> loop;
		if (i != 0 && !ifs.eof())
			ofs << " ";
		if (ifs.eol())
			ofs << std::endl;
		i++;
		if (ft_strcmp(s1, loop) == 0)
		{
			ofs << s2;
		}
		else
		{
			ofs << loop;
		}
		loop = "";
	}*/

}

int		main(int ac, char **av)
{
	if (ac == 4)
		go(av[1], av[2], av[3]);
	return 0;
}
