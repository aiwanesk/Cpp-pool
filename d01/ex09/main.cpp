#include "Logger.hpp"

int		main( void ) {

	Logger logger("file.log");

	logger.log("console", "BOUYA");
	logger.log("file", "Blabla");
	logger.log("mdr", "plop");
	return 0;
}
