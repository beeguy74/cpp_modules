#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Default Cat constructor " << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain;
    return ;
}

Cat::Cat(const Cat &other){
    std::cout << "Copy Cat constructor" << std::endl;
    this->operator=(other);
    return ;
}

Cat::~Cat(){
    std::cout << "Destructor Cat " << this->_type << std::endl;
    delete this->_brain;
    return ;
}

Cat     &Cat::operator=(const Cat &other){
    std::cout << "Assignation Cat" << std::endl;
    this->_type = other._type;
    this->_brain = other._brain;
    return *this;
}

void    Cat::makeSound() const{
    std::cout << "Cat says \"Meow!\"" << std::endl;
    return ;
}

const Brain *Cat::getBrain() const{
    return this->_brain;
}
