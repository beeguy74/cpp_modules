#include "Zombie.hpp"
#include <iostream>

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie  *shon;

    shon = newZombie("Shon");
    shon->announce();
    delete shon;
    randomChump("Bill Murray");
    return 0;
}