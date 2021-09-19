#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap() {
    std::cout << "Default DiamodTrap constructor " << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_SCAV"), FragTrap(name + "_Frag"){
    this->_name = name;
    std::cout << "Name DiamodTrap constructor " << std::endl;
    return;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamodTrap destructor " << std::endl;
    return;
}

void	DiamondTrap::whoAmI(void)
{
    std::cout << "This DiamondTrap name is " << this->_name << " and This ClapTrap name is " << ClapTrap::_name << std::endl;
}