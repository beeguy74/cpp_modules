#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Default ScavTrap constructor " << std::endl;
    return ;
};

ScavTrap::~ScavTrap(){
    std::cout << "Destructor ScavTrap" << std::endl;
}