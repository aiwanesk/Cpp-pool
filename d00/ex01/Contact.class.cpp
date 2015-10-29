#include "Contact.class.hpp"
#include <iostream>

Contact::Contact(void)
{}

Contact::~Contact(void)
{
}

int		strlen(std::string str)
{
	int	i= 0;
	while (str[i])
		i++;
	return i;
}

void	Contact::display ( void )
{
	std::cout << "        " << index;
	std::cout << "|";
	displayCol(first);
	std::cout << "|";
	displayCol(last);
	std::cout << "|";
	displayCol(nickname);
	std::cout << std::endl;
}

void	Contact	::displayCol ( std::string str )
{
	int	i;

	if (strlen(str) >= 10)
	{
		i = -1;
		while (++i < 9)
			std::cout << str[i];
		std::cout << ".";
	}
	else
	{
		i = 10 - strlen(str);
		while (i != 0)
		{
			std::cout << " ";
			i--;
		}
		std::cout << str;
	}
}

void	Contact::displayAll ( void )
{
	std::cout << "Index: " << index << std::endl;
	std::cout << "First name: " << first << std::endl;
	std::cout << "Last name: " << first << std::endl;
	std::cout << "Nickname: " << first << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Postal address: " << postal << std::endl;
	std::cout << "Email address: " << email << std::endl;
	std::cout << "Phone number: " << phone << std::endl;
	std::cout << "Birthday date: " << birthday << std::endl;
	std::cout << "Favorite meal: " << meal << std::endl;
	std::cout << "Underwear color: " << underwear << std::endl;
	std::cout << "Darkest secret: " << secret << std::endl;
}
