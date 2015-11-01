#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>

struct		Action;

class		Human {

	private:
		int				nbrAction;
		static Action	tab[];

		void			meleeAttack(std::string const & target);
		void			rangedAttack(std::string const & target);
		void			intimidatingShout(std::string const & target);

	public:
		Human( std::string name );
		~Human( void );

		std::string		name;

		void			action(std::string const & action_name, std::string const & target);

};

struct		Action {
	std::string			name;
	void				(Human::*f)(std::string const &);
};

#endif
