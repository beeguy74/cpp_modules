#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
    std::cout << "Default ScavTrap constructor " << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap& other){
    std::cout << "Copy ScavTrap constructor " << std::endl;
    this->operator=(other);
    return ;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name){
    std::cout << "Name ScavTrap constructor " << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    return ;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor" << std::endl;
    return;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& other){
    std::cout << "Assignation ScavTrap " << std::endl;
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return *this;
}

void    ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->_name
    << " entering in Gate keeper mode" << std::endl;
    return;
}

void    ScavTrap::attack(const std::string& target){
    std::cout << "ScavTrap " << this->_name << " attack " 
    << target  << ", causing " << this->_attackDamage
    << " points of damage!" << std::endl;
    return ;
}
