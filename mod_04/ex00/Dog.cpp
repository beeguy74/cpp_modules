#include "Dog.hpp"

Dog::Dog(){
    this->_type = "Dog";
    std::cout << "Default Dog constructor " << std::endl;
    return ;
}

Dog::Dog(const Dog &other){
    std::cout << "Copy Dog constructor" << std::endl;
    this->operator=(other);
    return ;
}

Dog::~Dog(){
    std::cout << "Destructor Dog " << this->_type << std::endl;
    return ;
}

Dog     &Dog::operator=(const Dog &other){
    std::cout << "Assignation Dog" << std::endl;
    this->_type = other._type;
    return *this;
}

void    Dog::makeSound() const{
    std::cout << "Dog says \"Who let the dog out!\"" << std::endl;
    return ;
}
