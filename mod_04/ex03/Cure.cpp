#include "Cure.hpp"

Cure::Cure(): AMateria("cure"){
    return ;
}

Cure::~Cure(){
    return ;
}

Cure *Cure::clone() const{
    return new Cure;
}

void    Cure::use(ICharacter &target){
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
