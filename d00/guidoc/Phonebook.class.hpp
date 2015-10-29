#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class Phonebook {

private:
	Contact		_list[8];
	int			_nbrContact;

public:
	Phonebook( void );
	~Phonebook( void );
	void		addContact( Contact *contact );
	int			getNbr( void ) const;
	Contact		*getContact( int index );
	void		applyAll( void ( Contact::*f )( void ) );

};

#endif
