#include "Account.class.hpp"
#include <iostream>

//    Constructor

Account::Account( int initialDeposit ): _accountIndex(Account::_nbAccounts++), _amount(initialDeposit), _nbDeposits(0), _nbWithdrawals(0) {
	Account::_totalAmount += initialDeposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

//    Destructor

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	Account::_totalAmount -= this->_amount;
	Account::_nbAccounts -= 1;
}

//    Private data and accessors

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int		Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

//    Display functions

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::cout << "[20150406_153629] ";
}

//    Make function

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	if (this->_amount >= withdrawal) {
		std::cout << "index:" << this->_accountIndex << ";p_amount:" <<  this->_amount << ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	else {
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
}

//    Check function

int		Account::checkAmount( void ) const {
	return this->_amount;
}
