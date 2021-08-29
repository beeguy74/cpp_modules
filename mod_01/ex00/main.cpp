#include "Zombie.hpp"
#include <iostream>

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie  *shon;

    shon = newZombie("Shon");
    shon->announce();
    randomChump("Bill Murray");
    delete shon;
    return 0;
}