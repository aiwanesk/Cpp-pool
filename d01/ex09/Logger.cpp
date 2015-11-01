#include "Logger.hpp"

Logger::Logger( std::string file ): file(file) {
	this->nbr = 2;
}

Logger::~Logger( void ) {
}

Dest		Logger::tab[] = {
				{"console", &Logger::logToConsole},
				{"file", &Logger::logToFile}
			};

void		Logger::logToConsole( std::string message ) {
	std::cout << message << std::endl;
}

void		Logger::logToFile( std::string message ) {
	std::ofstream file(this->file.c_str(), std::ios::app);

	file << message << std::endl;
	file.close();
}

std::string		Logger::makeLogEntry( std::string message ) {
	time_t now = time(0);
	return std::string(ctime(&now)).erase(strlen(ctime(&now)) - 1) + " - " + message;
}

void		Logger::log( std::string  const & dest, std::string const & message) {
	int		i;

	i = -1;
	while (++i < this->nbr)
		if (dest == this->tab[i].name)
			(this->*tab[i].f)(makeLogEntry(message));
}
