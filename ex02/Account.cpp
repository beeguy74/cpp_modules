#include "Account.hpp"
#include <ctime>
#include <iostream>

Account::Account(int initial_deposit) : _amount(initial_deposit) {
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

Account::~Account(void) {
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex
                << ";amount:" << this->_amount
                << ";closed" << std::endl;
    return ;
}

void    Account::_displayTimestamp(void) {
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

int Account::getNbDeposits(void)
{
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void){
    Account::_displayTimestamp();
    std::cout << " accounts:" << Account::getNbAccounts() 
                << ";total:" << Account::getTotalAmount()
                << ";deposits:" << Account::getNbDeposits()
                << ";withdrawals:" << Account::getNbWithdrawals()
                << std::endl;
    return ;
}

void    Account::makeDeposit(int deposit) {
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex
                << ";p_amount:" << this->_amount;
    std::cout << ";deposit:" << deposit;
    this->_amount += deposit;
    this->_nbDeposits += 1;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits += 1;
    std::cout << ";amount:" << this->_amount
                << ";nb_deposits:" << this->_nbDeposits
                << std::endl;
    return ;
}

bool    Account::makeWithdrawal(int withdrawal) {
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex
                << ";p_amount:" << this->_amount;
    std::cout << ";withdrawal:";
    if (this->_amount < withdrawal){
        std::cout << "refused" << std::endl;
        return false;
    }
    std::cout << withdrawal;
    this->_amount -= withdrawal;
    this->_nbWithdrawals += 1;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals += 1;
    std::cout << ";amount:" << this->_amount
                << ";nb_withdrawals:" << this->_nbWithdrawals
                << std::endl;
    return true;
}

int Account::checkAmount(void) const{
    return this->_amount;
}

void    Account::displayStatus(void) const{
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex
                << ";amount:" << this->_amount
                << ";deposits:" << this->_nbDeposits
                << ";withdrawals:" << this->_nbWithdrawals
                << std::endl;
    return ;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// int main() {
//     Account vasya(100);
//     Account petya(1100);
//     Account::displayAccountsInfos();
//     petya.makeDeposit(45);
//     petya.makeWithdrawal(120);
//     petya.displayStatus();
//     vasya.makeDeposit(45);
//     vasya.makeWithdrawal(120);
//     vasya.displayStatus();
//     Account::displayAccountsInfos();
//     return 0;
// }