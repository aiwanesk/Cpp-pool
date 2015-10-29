#include "Contact.class.hpp"
#include "Phonebook.class.hpp"
#include <iostream>

Phonebook::Phonebook(void)
{
	_nbrContact = 0;
}

Phonebook::~Phonebook(void)
{
}

void		Phonebook::addContact(Contact *contact)
{
	_list[_nbrContact] = *contact;
	_nbrContact +=1;
}

Contact		*Phonebook::getContact(int index)
{
	int		i = -1;

	while (_nbrContact > ++i)
		if (_list[i].index == index)
			return (&_list[i]);
	return NULL;
}

int		Phonebook::getNbr(void)
{
	return _nbrContact;
}

void	Phonebook::displayAll(void)
{
	int		i;

	i = -1;
	while (_nbrContact > ++i)
		_list[i].display();
}
