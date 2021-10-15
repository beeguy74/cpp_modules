#include "Cat.hpp"

Cat::Cat(){
    this->_type = "Cat";
    std::cout << "Default Cat constructor " << std::endl;
    return ;
}

Cat::Cat(const Cat &other){
    std::cout << "Copy Cat constructor" << std::endl;
    this->operator=(other);
    return ;
}

Cat::~Cat(){
    std::cout << "Destructor Cat " << this->_type << std::endl;
    return ;
}

Cat     &Cat::operator=(const Cat &other){
    std::cout << "Assignation Cat" << std::endl;
    this->_type = other._type;
    return *this;
}

void    Cat::makeSound() const{
    std::cout << "Cat says \"Meow!\"" << std::endl;
    return ;
}
