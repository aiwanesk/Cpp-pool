#include <iostream>
#include <cstring>
#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

//Need to do display && displayAll from Contact

Contact		getContact( Phonebook phonebook )
{
	Contact		newContact;

	newContact.index = phonebook.getNbr();
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
	phonebook.addContact(&newContact);
}

int			main( void )
{
	int			i;
	char		cmd[7];
	Phonebook	phonebook;
	Contact		contact;

	while (1)
	{
		std::cout << "Command: ";
		std::cin >> cmd;
		if (strlen(cmd) > 6)
			std::cout << "Bad input." << std::endl;
		else if (strcmp(cmd, "ADD"))
		{
			if (phonebook.getNbr() <= 7)
				getContact(phonebook);
			else
				std::cout << "Already 8 contacts";
		}
		else if (strcmp(cmd, "SEARCH"))
		{
			//->add display from contact
			phonebook.applyAll();
			std::cout << "If you want more info. Give index: ";
			std::cin >> cmd ;
			i = std::atoi(cmd);
			if ()
			//->recup index et if on recup le contact -> displayAll from contact
		}
		//exit
	}
	return (0);
}
