#include "AMateria.hpp"


AMateria::AMateria(const std::string &type): _type(type){
    return ;
}

AMateria::~AMateria(){
    return ;
}

const std::string   &AMateria::getType() const{
    return this->_type;
}

void    AMateria::use(ICharacter &target){
    std::cout << "*do noting with " << target.getName() << "*" << std::endl;
    return ;
}