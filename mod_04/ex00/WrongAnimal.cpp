#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal"){
    std::cout << "Default WrongAnimal constructor " << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
    std::cout << "Copy WrongAnimal constructor" << std::endl;
    this->operator=(other);
    return ;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "Destructor WrongAnimal " << this->_type << std::endl;
    return ;
}

WrongAnimal&   WrongAnimal::operator=(const WrongAnimal& other){
    std::cout << "Assignation WrongAnimal " << std::endl;
    this->_type = other._type;
    return *this;
}

void    WrongAnimal::makeSound() const{
    std::cout << "Its some kind of WrongAnimalish, You cant read this" << std::endl;
    return ;
}

const std::string   &WrongAnimal::getType() const{
    return this->_type;
}
