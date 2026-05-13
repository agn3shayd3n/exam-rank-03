/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-07 14:12:53 by agnesgar          #+#    #+#             */
/*   Updated: 2026-05-07 14:12:53 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <string>
#include <iostream>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;                                                                            
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;                                                                       
int Account::_totalNbWithdrawals = 0; 

void	Account::makeDeposit( int deposit )
{
	int	p_amount;

	p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;

	_totalAmount += deposit;
	_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
		<< ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:"
			<< _nbDeposits << "\n";
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();

	if (_amount - withdrawal < 0)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
			<< ";withdrawal:" << "refused" << "\n";
		return (0);
	}
	else
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;

		_amount -= withdrawal;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal
			<< ";withdrawal:" << withdrawal << ";amount:" << _amount
				<< ";nb_withdrawals:" << _nbWithdrawals << "\n";

		return (1);
	}
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:"
		<< _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}

void	Account::displayAccountsInfos( void )
{
	int	accounts;

	accounts = Account::getNbAccounts();
	Account::_displayTimestamp();
	std::cout << "accounts:" << accounts << ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << "\n";
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
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return(_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void )
{
	std::time_t now = std::time(0);
	std::tm *local = std::localtime(&now);

	std::cout << "[" << local->tm_year + 1900 << std::setfill('0') << std::setw(2) << local->tm_mon + 1 
		<< std::setfill('0') << std::setw(2) << local->tm_mday << "_" << std::setfill('0') << std::setw(2)
			<< local->tm_hour << std::setfill('0') << std::setw(2) << local->tm_min << std::setfill('0') << std::setw(2) << local->tm_sec << "] ";
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << "\n";
}

Account::Account(int initial_deposit)
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts++;

	_totalAmount += _amount;

	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << "\n";
}