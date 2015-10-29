#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

void	getaddContact( Phonebook *phonebook , char index)
{
	Contact	newContact;

	newContact.index = index;
	std::cout << "First Name: ";
	std::cin >> newContact.first;
	std::cout << "Last Name: ";
	std::cin >> newContact.last;
	std::cout << "Nickname: ";
	std::cin >> newContact.nickname;
	std::cout << "Login: ";
	std::cin >> newContact.login;
	std::cout << "Postal address: ";
	std::cin >> newContact.postal;
	std::cout << "Email address: ";
	std::cin >> newContact.email;
	std::cout << "Phone number: ";
	std::cin >> newContact.phone;
	std::cout << "Birthday date: ";
	std::cin >> newContact.birthday;
	std::cout << "Favorite meal: ";
	std::cin >> newContact.meal;
	std::cout << "Underwear color: ";
	std::cin >> newContact.underwear;
	std::cout << "Darkest secret: ";
	std::cin >> newContact.secret;
	phonebook->addContact(&newContact);
}

int		main(void)
{
	int		i;
	char str[10];
	Phonebook	phonebook;
	Contact		*contact;
	char		index = '0';

	while (1)
	{
		std::cout << "Enter a commad: ";
		std::cin >> str;
		if (strlen(str) > 10)
			std::cout << "This command is too long" << std:: endl;
		else if (strcmp(str, "EXIT") == 0)
		{
			std::cout << "See u soon" << std::endl;
			exit(0);
		}
		else if (strcmp(str, "ADD") == 0)
		{
			index++;
			if (phonebook.getNbr() <= 7)
				getaddContact(&phonebook, index);
			else
				std::cout << "I have 8 contacts sorry :-(" << std::endl;
		}
		else if (strcmp(str, "SEARCH") == 0)
		{
			if (phonebook.getNbr() == 0)
				std::cout << "There is no contact, communiste!" << std::endl;
			else
			{
				phonebook.displayAll();
				std::cout << "Give me in index: ";
				std::cin >>str;
				i = std::atoi(str) + 48;
				if ((contact = phonebook.getContact(i)) != NULL)
					contact->displayAll();
			}
		}
	}
	return 0;
}
