#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class		Zombie {

	public:
		Zombie( void );
		~Zombie( void );

		std::string		name;
		std::string		type;
		static int		nbr;

		std::string		randomName( void ) const;
		void			announce( void ) const ;
};

#endif
