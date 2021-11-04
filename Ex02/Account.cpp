#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include "Account.hpp"

using namespace std;

int	Account::getNbAccounts( void )
{
	cout << "test";
	return 0;
}

int	Account::getTotalAmount( void )
{
	cout << "test";
	return 0;
}

int	Account::getNbDeposits( void )
{
	cout << "test";
	return 0;
}

int	Account::getNbWithdrawals( void )
{
	cout << "test";
	return 0;
}

void	Account::displayAccountsInfos( void )
{
	cout << "test";
}

void	Account::makeDeposit( int deposit )
{
	int i = deposit;
	cout << "test" << i;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int i = withdrawal;
	cout << "test" << i;
	return 0;
}

int		Account::checkAmount( void ) const
{
	cout << "test";
	return 0;
}

void	Account::displayStatus( void ) const
{
	cout << "test";
}

void	Account::_displayTimestamp( void )
{
	cout << "test";
}
