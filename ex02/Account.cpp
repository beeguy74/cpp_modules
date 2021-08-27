#include "Account.hpp"
#include <ctime>
#include <iostream>

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
    Account::_totalAmount += this->_amount;
    this->_accountIndex = Account::_nbAccounts++;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex
                << ";amount:" << this->_amount
                << ";created" << std::endl;
    return ;
}

Account::~Account(void)
{
    Account::_nbAccounts--;
    Account::_totalAmount -= this->_amount;
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex
                << ";amount:" << this->_amount
                << ";closed" << std::endl;
    return ;
}

void    Account::_displayTimestamp(void)
{
    std::time_t stamp;
    std::tm     *local;
    char        str[42];

    stamp = time(NULL);
    local = std::localtime(&stamp);
    std::strftime(str, sizeof(str), "%Y%m%d_%H%M%S", local);
    std::cout << '[' << str << ']';
    return ;
}

int Account::getNbAccounts(void)
{
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
    return Account::_totalAmount;
}

// int Account::getNbDeposits(void)
// {
//     return Account::_nbDeposits;
// }

// int Account::getNbWithdrawals(void)
// {
//     return Account::_nbWithdrawals;
// }

void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << " accounts:" << Account::getNbAccounts() 
                << ";total:" << Account::getTotalAmount()
                << ";deposits:" << Account::getNbDeposits()
                << ";withdrawals:" << Account::getNbWithdrawals()
                << std::endl;
    return ;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int main()
{
    Account vasya(100);
    Account petya(1100);
    Account::displayAccountsInfos();
    return 0;
}