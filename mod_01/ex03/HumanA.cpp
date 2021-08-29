#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &gun) : _name(name), _weapon(gun){
    return ;
}

HumanA::~HumanA(void){
    return;
}

void    HumanA::attack(){
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}