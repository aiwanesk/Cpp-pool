#ifndef PHONEBOOOK_CLASS_HPP
# define PHONEBOOOK_CLASS_HPP

#include "Contact.class.hpp"

class Phonebook
{
	private:
		Contact	_list[8];
		int		_nbrContact;

	public:
		Phonebook(void);
		~Phonebook(void);
		void	addContact(Contact *contact);
		int		getNbr(void);
		Contact	*getContact(int index);
		void	displayAll(void);
};

#endif
