#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_nbAccounts = 0;


Account::Account(int initial_deposit)
{
    _displayTimestamp();
    _accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _amount = initial_deposit;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
    Account::_totalAmount += initial_deposit;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
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
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" 
    << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits
    << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::makeDeposit(int value)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << value;
    _amount += value;
    Account::_totalAmount += value;
    std::cout << ";amount:" << _amount; 
    _nbDeposits++;
    std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
    Account::_totalNbDeposits++;
}

bool    Account::makeWithdrawal(int value)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
    if (_amount - value < 0)
    {
        std::cout << ";withdrawal:refused\n";
        return (false);
    }
    std::cout << ";withdrawal:" << value;
    _amount -= value;
    Account::_totalAmount -= value;
    std::cout << ";amount:" << _amount;
    _nbWithdrawals++;
    std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    Account::_totalNbWithdrawals++;

    return (true);
}

void    Account::_displayTimestamp()
{
    time_t now = time(NULL);

    tm *ltm = std::localtime(&now);
    // std::cout << "[" << ltm->tm_year << " " << ltm->tm_mon << ltm->tm_mday << "_" << ltm->tm_hour << ltm->tm_min << ltm->tm_sec << "] ";

    std::cout << "[" << ltm->tm_year + 1900 << std::setw(2) << std::setfill('0') <<  ltm->tm_mon + 1 << 
    std::setw(2) << std::setfill('0') << ltm->tm_mday << "_" << ltm->tm_hour << ltm->tm_min << ltm->tm_sec << "] ";
}
