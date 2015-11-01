#include <iostream>
#include <fstream>
#include <cerrno>
#include <cstring>
#include <sys/stat.h>

void	display( void ) {
	std::string		line;

	while (!std::cin.eof())
	{
		std::cin >> line;
		std::cout << line << std::endl;
	}
}

void	display_files( char **files )
{
	int				i;
	struct stat		sf;
	std::string		line;

	i = -1;
	while (files[++i]) {
		lstat(files[i], &sf);
		if (S_ISDIR(sf.st_mode))
			std::cout << "cat: " << files[i] << ": is a directory." << std::endl;
		else {
			std::ifstream	file(files[i]);
			if (!file.is_open())
				std::cerr << "cat: error: " << strerror(errno) << std::endl;
			else {
				while (std::getline(file, line))
					std::cout << line << std::endl;
			}
			file.close();
		}
	}
}

int		main( int ac, char **av )
{
	if (ac == 1)
		display();
	else {
		display_files(av + 1);
	}
}
