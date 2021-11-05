#include <iostream>
#include <ctime>
#include "Account.hpp"

using namespace std;

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
	cout << "index:\e[94m" << _accountIndex
	<< "\e[0m;amount:\e[94m" << initial_deposit << "\e[0m;created" << endl;
}

Account::~Account()
{
	Account::_displayTimestamp();
	cout << "index:\e[94m" << _accountIndex
	<< "\e[0m;amount:\e[94m" << _amount << "\e[0m;closed" << endl;
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
	cout << "accounts:\e[94m" << _nbAccounts
	<< "\e[0m;total:\e[94m" << _totalAmount
	<< "\e[0m;deposits:\e[94m" << _totalNbDeposits
	<< "\e[0m;withdrawals:\e[94m" << _totalNbWithdrawals << "\e[0m" << endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	cout << "index:\e[94m" << _accountIndex << "\e[0m"
	<< "\e[0m;p_amount:\e[94m" << _amount << "\e[0m"
	<< ";deposit:\e[94m" << deposit << "\e[0m";
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	cout << ";amount:\e[94m" << _amount << "\e[0m" << ";nb_deposits:\e[94m"
	<< _nbDeposits << "\e[0m" << endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	cout << "index:\e[94m" << _accountIndex << "\e[0m"
	<< ";p_amount:\e[94m" << _amount << "\e[0m";
	if (withdrawal > _amount)
	{
		Account::_displayTimestamp();
		cout << ";withdrawal:refused" << endl;
		return false;
	}
	else
	{
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		Account::_displayTimestamp();
		cout << ";withdrawal:\e[94m" << withdrawal 
		<< "\e[0m;amount:\e[94m" << _amount 
		<< "\e[0m;withdrawals:\e[94m" << _nbWithdrawals << "\e[0m" << endl;
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
	cout << "index:\e[94m" << _accountIndex << "\e[0m"
	<< "\e[0m;amount:\e[94m" << _amount
	<< "\e[0m;deposits:\e[94m" << _nbDeposits
	<< "\e[0m;withdrawals:\e[94m" << _nbWithdrawals << "\e[0m" << endl;
}

void	Account::_displayTimestamp( void )
{
	time_t t	= time(0);
	tm* now		= localtime(&t);

	cout << "[" << (now->tm_year + 1900);
	if (now->tm_mon < 10)
		cout << "0"; 
	cout << (now->tm_mon + 1);
	if (now->tm_mday < 10)
		cout << "0"; 
	cout << now->tm_mday << "_" ;
	if (now->tm_hour < 10)
		cout << "0"; 
	cout << now->tm_hour;
	if (now->tm_min < 10)
		cout << "0";
	cout<< now->tm_min; 
	if (now->tm_sec < 10)
		cout << "0";
	cout << now->tm_sec << "] ";
}
