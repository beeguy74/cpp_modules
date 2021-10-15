#include "WrongCat.hpp"

WrongCat::WrongCat(){
    this->_type = "WrongCat";
    std::cout << "Default WrongCat constructor " << std::endl;
    return ;
}

WrongCat::WrongCat(const WrongCat &other){
    std::cout << "Copy WrongCat constructor" << std::endl;
    this->operator=(other);
    return ;
}

WrongCat::~WrongCat(){
    std::cout << "Destructor WrongCat " << this->_type << std::endl;
    return ;
}

WrongCat     &WrongCat::operator=(const WrongCat &other){
    std::cout << "Assignation WrongCat" << std::endl;
    this->_type = other._type;
    return *this;
}

void    WrongCat::makeSound() const{
    std::cout << "WrongCat says \"Meow!\"" << std::endl;
    return ;
}
