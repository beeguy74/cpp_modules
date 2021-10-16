#include "Animal.hpp"

Animal::Animal(): _type("Animal"){
    std::cout << "Default Animal constructor " << std::endl;
    return ;
}

Animal::~Animal(){
    std::cout << "Destructor Animal " << this->_type << std::endl;
    return ;
}

const std::string   &Animal::getType() const{
    return this->_type;
}
