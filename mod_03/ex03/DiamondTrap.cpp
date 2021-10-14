#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    std::cout << "Default DiamodTrap constructor" << std::endl;
    return ; 
}

DiamondTrap::DiamondTrap(const std::string& name): 
        ClapTrap(name + "_clap_name"), 
        ScavTrap(name), 
        FragTrap(name){
    this->_name = name;
    this->_energyPoints = 50;
    std::cout << "Name DiamodTrap constructor " << std::endl;
    return ; 
}

DiamondTrap::DiamondTrap(const DiamondTrap& other){
    std::cout << "Copy DiamondTrap constructor " << std::endl;
    this->operator=(other);
    return ;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamodTrap destructor " << std::endl;
    return;
}

void    DiamondTrap::showStats(){
    std::cout << this->_name << " Hitpoints are " << this->_hitPoints << std::endl;
    std::cout << this->_name << " Energypoints are " << this->_energyPoints << std::endl;
    std::cout << this->_name << " Attack damage are " << this->_attackDamage << std::endl;
    return ;
}

DiamondTrap&   DiamondTrap::operator=(const DiamondTrap& other){
    std::cout << "Assignation DiamondTrap " << std::endl;
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return *this;
}

void	DiamondTrap::whoAmI(void)
{
    std::cout << "This DiamondTrap name is " << this->_name << " and This ClapTrap name is " << ClapTrap::_name << std::endl;
}
