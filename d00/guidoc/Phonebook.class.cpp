#include <iostream>
#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

Phonebook::Phonebook( void ) {
	_nbrContact = 0;
}

Phonebook::~Phonebook( void ) {
}

void		Phonebook::addContact( Contact *contact ) {
	_list[_nbrContact] = *contact;
	_nbrContact += 1;
}

Contact		*Phonebook::getContact( int index ) {
	int		i;

	i = -1;
	while (_nbrContact > ++i)
	{
		if (_list[_nbrContact].index == index)
			return &_list[i];
	}
	return NULL;
}

int			Phonebook::getNbr( void ) const {
	return _nbrContact;
}

void		Phonebook::applyAll( void ( Contact::*f )( void ) ) {
	int		i;

	i = -1;
	while (_nbrContact > ++i)
		(_list[i].*f)();
}


