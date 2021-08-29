#include "Zombie.hpp"
#include <iostream>

void    randomChump(std::string name){
    Zombie  tmp = Zombie(name);

    tmp.announce();
    return ;
}