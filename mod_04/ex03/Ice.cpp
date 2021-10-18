#include "Ice.hpp"

Ice::Ice(): AMateria("ice"){
    return ;
}

Ice::~Ice(){
    return ;
}

Ice *Ice::clone() const{
    return new Ice;
}

void    Ice::use(ICharacter &target){
    std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
