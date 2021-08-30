#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
    this->_weapon = NULL;
    return ;
}

HumanB::~HumanB(void){
    return ;
}

void    HumanB::setWeapon(Weapon &gun){
    this->_weapon = &gun;
    return ;
}

void    HumanB::attack(){
    std::cout << this->_name << " attacks with his ";
    if (this->_weapon == NULL)
        std::cout << "hairy hand" << std::endl;
    else
        std::cout << this->_weapon->getType() << std::endl;
}
