#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalAmount = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << _amount << ";closed" << std::endl;
	_totalAmount-= _amount;
	_nbAccounts -= 1;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return(_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
	<< ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals << "" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ""
	<< ";p_amount:" << _amount << ""
	<< ";deposit:" << deposit << "";
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";amount:" << _amount << "" << ";nb_deposits:"
	<< _nbDeposits << "" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ""
	<< ";p_amount:" << _amount << "";
	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal 
		<< ";amount:" << _amount 
		<< ";withdrawals:" << _nbWithdrawals << "" << std::endl;
	}
	return true;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ""
	<< ";amount:" << _amount
	<< ";deposits:" << _nbDeposits
	<< ";withdrawals:" << _nbWithdrawals << "" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t t	= time(0);
	tm* now		= localtime(&t);

	std::cout << "[" << (now->tm_year + 1900);
	if (now->tm_mon < 10)
		std::cout << "0"; 
	std::cout << (now->tm_mon + 1);
	if (now->tm_mday < 10)
		std::cout << "0"; 
	std::cout << now->tm_mday << "_" ;
	if (now->tm_hour < 10)
		std::cout << "0"; 
	std::cout << now->tm_hour;
	if (now->tm_min < 10)
		std::cout << "0";
	std::cout<< now->tm_min; 
	if (now->tm_sec < 10)
		std::cout << "0";
	std::cout << now->tm_sec << "] ";
}
