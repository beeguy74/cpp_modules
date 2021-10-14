#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "Default FragTrap constructor " << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    return ;
}

FragTrap::FragTrap(const FragTrap& other){
    std::cout << "Copy FragTrap constructor " << std::endl;
    this->operator=(other);
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

FragTrap&   FragTrap::operator=(const FragTrap& other){
    std::cout << "Assignation FragTrap " << std::endl;
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return *this;
}

void    FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << this->_name
    << " says: HIGH FIVE GUYS! I LOVE YOU GUYS!" << std::endl;
    return;
}
