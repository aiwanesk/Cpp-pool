#include <iostream>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::cout << "First str: " + str << std::endl;
	std::string *ptr = &str;
	std::cout << "Pointer: ";
	std::cout << *ptr << std::endl;
	std::string& ref = str;
	std::cout << "Reference: ";
	std::cout << ref << std::endl;
	return (0);
}
