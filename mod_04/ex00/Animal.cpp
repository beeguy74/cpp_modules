#include "Animal.hpp"

Animal::Animal(): _type("Animal"){
    std::cout << "Default Animal constructor " << std::endl;
    return ;
}

Animal::Animal(const Animal& other){
    std::cout << "Copy Animal constructor" << std::endl;
    this->operator=(other);
    return ;
}

Animal::~Animal(){
    std::cout << "Destructor Animal " << this->_type << std::endl;
    return ;
}

Animal&   Animal::operator=(const Animal& other){
    std::cout << "Assignation Animal " << std::endl;
    this->_type = other._type;
    return *this;
}

void    Animal::makeSound() const{
    std::cout << "Its some kind of Animalish, You cant read this" << std::endl;
    return ;
}

const std::string   &Animal::getType() const{
    return this->_type;
}
