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
    return ;
}

Account::~Account(void)
{
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
    std::cout << '[' << str << ']' << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int main()
{
    Account vasya(100);
    return 0;
}