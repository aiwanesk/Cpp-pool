#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class	Contact {

public:
	int				index;
	char			*first;
	char			*last;
	char			*nickname;
	char			*login;
	char			*postal;
	char			*email;
	char			*phone;
	char			*birthday;
	char			*meal;
	char			*underwear;
	char			*secret;
	
	Contact( void );
	~Contact( void );

	void	display ( void ) const;
	void	displayAll ( void ) const;

};

#endif
