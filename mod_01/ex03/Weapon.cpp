#include "Weapon.hpp"

Weapon::Weapon(void){
    this->_type = "";
    return ;
}

Weapon::~Weapon(void){
    return ;
}

void    Weapon::setType(std::string type){
    this->_type = type;
    return ;
}

std::string const   &Weapon::getType(void){
    return this->_type;
}

int Weapon::_index = 1;