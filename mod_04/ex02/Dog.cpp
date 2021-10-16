#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Default Dog constructor " << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain;
    return ;
}

Dog::Dog(const Dog &other){
    std::cout << "Copy Dog constructor" << std::endl;
    this->operator=(other);
    return ;
}

Dog::~Dog(){
    std::cout << "Destructor Dog " << this->_type << std::endl;
    delete this->_brain;
    return ;
}

Dog     &Dog::operator=(const Dog &other){
    std::cout << "Assignation Dog" << std::endl;
    this->_type = other._type;
    delete this->_brain;
    this->_brain = new Brain(*other._brain);
    return *this;
}

void    Dog::makeSound() const{
    std::cout << "Dog says \"Who let the dog out!\"" << std::endl;
    return ;
}

const Brain *Dog::getBrain() const{
    return this->_brain;
}
