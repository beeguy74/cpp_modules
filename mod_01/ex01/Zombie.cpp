#include "Zombie.hpp"

Zombie::Zombie(void) : _name("John Doe"){
    return ;
}

Zombie::Zombie(std::string name) : _name(name){
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << std::endl;
    return ;
}

void    Zombie::setName(std::string name){
    this->_name = name;
    return ;
}

void    Zombie::announce(void){
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}