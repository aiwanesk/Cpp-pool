#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <string>

class				Contact
{
	public :
		char		index;
		std::string	first;
		std::string	last;
		std::string	nickname;
		std::string	login;
		std::string	postal;
		std::string	email;
		std::string	phone;
		std::string	birthday;
		std::string	meal;
		std::string	underwear;
		std::string	secret;

	Contact(void);
	~Contact(void);

	void	display(void);
	void	displayAll(void);
	void	displayCol(std::string str);
};

#endif
