#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
    std::cout << "Default FragTrap constructor " << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    return ;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name){
    std::cout << "Name FragTrap constructor " << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    return ;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor" << std::endl;
    return;
}

void    FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << this->_name
    << " says: HIGH FIVE GUYS! I LOVE YOU GUYS!" << std::endl;
    return;
}

void    FragTrap::attack(const std::string& target){
    std::cout << "FragTrap " << this->_name << " attack " 
    << target  << ", causing " << this->_attackDamage
    << " points of damage!" << std::endl;
    return ;
}
