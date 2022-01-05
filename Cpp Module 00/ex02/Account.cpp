#include "Account.hpp"
#include <iostream>

Account::Account()
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
}

Account::Account(int initial_deposit)
{
    Account();
    _amount = initial_deposit;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
    _totalAmount += initial_deposit;
}

Account::~Account()
{
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

static int	getNbAccounts( void )
{
    return (_nbAccounts);
}

static int	getTotalAmount( void )
{
    return (_totalAmount);

}
static int	getNbDeposits( void )
{
    return (_totalNbDeposits);
}

static int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

static void Account::displayAccountsInfos( void )
{
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" 
    << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus( void ) const
{
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" 
    << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void    Account::makeDeposit(int value)
{
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << "deposits:" << value;
    _amount += value;
    std::cout << "amount:" << _amount; 
    _nbDeposits++;
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
    _totalNbDeposits++;
}

bool    Account::makeWithdrawal(int value)
{
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
    if (_amount - value < 0)
    {
        std::cout << "withdrawals: refused\n";
        return (false);
    }
    std::cout << "withdrawals:" << value;
    _amount -= value;
    std::cout << "amount:" << _amount;
    _nbWithdrawals++;
    std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    _totalNbWithdrawals++;
    return (true);
}