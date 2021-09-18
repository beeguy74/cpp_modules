#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): 
        _name("No named"), 
        _hitPoints(10),
        _energyPoints(10), 
        _attackDamage(0){
    std::cout << "Default ClapTrap constructor " << this->_name << std::endl;
    return ;
}

ClapTrap::ClapTrap(const std::string& name):
        _name(name), 
        _hitPoints(10),
        _energyPoints(10), 
        _attackDamage(0){
    std::cout << "Name ClapTrap constructor " << this->_name << std::endl;
    return ;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor ClapTrap " << this->_name << std::endl;
    return ;
}

void    ClapTrap::attack(std::string const& target){
    --this->_energyPoints;
    std::cout << "ClapTrap " << this->_name << " attack " 
        << target  << ", causing " << this->_attackDamage
        << " points of damage!" << std::endl;
    return ;
}

void    ClapTrap::takeDamage(unsigned int amount){
    ++this->_energyPoints;
    this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name 
        << " taking " << amount
        << " points of damage!" << std::endl;
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount){
    --this->_energyPoints;
    this->_hitPoints += amount;
    std::cout << "ClapTrap " << this->_name 
        << " repairing " << amount
        << " points of damage!" << std::endl;
    return ;
}