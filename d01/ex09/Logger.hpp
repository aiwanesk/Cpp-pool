#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <cstring>

struct		Dest;

class		Logger {

	private:
		int				nbr;
		std::string		file;
		static Dest		tab[];

		void			logToConsole( std::string message );
		void			logToFile( std::string message );
		std::string		makeLogEntry( std::string message );

	public:
		Logger( std::string file );
		~Logger( void );
		void			log( std::string const & dest, std::string const & message );
};

struct		Dest {
	std::string			name;
	void				(Logger::*f)(std::string);
};

#endif
