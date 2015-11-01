#include "fixed.hpp"

Fixed::Fixed(void) : _storage(0), _frac(8)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int param) : _storage(param), _frac(8)
{
	std::cout << "Int constructor called" << std::endl;
	this->_storage = param << this->_frac;
}

Fixed::Fixed(const float param) : _storage(param), _frac(8)
{
	std::cout << "Float constructor called" << std::endl;
	this->_storage = roundf(param * (pow(2, this->_frac)));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & source) : _storage(0), _frac(8)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

int		Fixed::toInt(void) const
{
	return this->_storage >> this->_frac;
}

float	Fixed::toFloat(void) const
{
	return this->getRawBits() * pow(2, -this->_frac);
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBitsts member function called" << std::endl;
	return this->_storage;
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_storage = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->setRawBits(rhs.getRawBits());
	return *this;
}

std::ostream & operator<<(std::ostream & op, Fixed const & integ)
{
	return op << integ.toFloat();
}
