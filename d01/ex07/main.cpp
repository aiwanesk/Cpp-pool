#include <iostream>
#include <cstring>
#include <fstream>

static void		replace( std::string filename, std::string s1, std::string s2) {
	int				found;
	std::string		line;
	std::string		output;

	output = filename + ".replace";
	std::ifstream	file(filename.c_str());
	std::ofstream	out(output.c_str());
	while (std::getline(file, line)) {
		found = 0;
		while ((found = line.find(s1, found)) != std::string::npos) {
			line.replace(found, s1.length(), s2);
			found += s2.length();
		}
		out << line << std::endl;
	}
	file.close();
	out.close();
}

int				main( int ac, char **av )
{
	if (ac != 4) {
		std::cout << "Usage: replace <filename> <string to replace> <replacing string>" << std::endl;
		return 0;
	}
	if (!strlen(av[1]) || !strlen(av[2]) || !strlen(av[3])) {
		std::cout << "No empty string." << std::endl;
		std::cout << "Usage: replace <filename> <string to replace> <replacing string>" << std::endl;
		return 0;
	}
	replace(av[1], av[2], av[3]);
	return 0;
}
