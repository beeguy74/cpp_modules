#include "Weapon.hpp"

Weapon::Weapon() : _type(std::string()){
    return ;
}

Weapon::Weapon(std::string type) : _type(type){
    return ;
}

Weapon::Weapon(const Weapon &weapon) : _type(weapon.getType()){
    return ;
}

Weapon::~Weapon(){
    return ;
}

Weapon& Weapon::operator=(const Weapon &weapon){
    this->_type = weapon._type;
    return *this;
}

void    Weapon::setType(std::string type){
    this->_type = type;
    return ;
}

const std::string&    Weapon::getType() const{
    return this->_type;
}

int Weapon::_index = 1;