#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "Default FragTrap constructor " << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    return ;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name){
    std::cout << "Name FragTrap constructor " << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
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
