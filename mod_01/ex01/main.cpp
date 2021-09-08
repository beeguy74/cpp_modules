#include "Zombie.hpp"
#include <iostream>

Zombie  *zombieHorde(int N, std::string name);

void    hordeAnnounce(int N, Zombie *arr){
    for (int i = 0; i < N; i++){
        arr->announce();
    }
    return ;
}
int main(void)
{
    Zombie  *arr;
    int     N;
    N = 3;
    arr = zombieHorde(N, "Bill Murray");
    hordeAnnounce(N, arr);
    delete [] arr;

    N = 5;
    arr = zombieHorde(N, "Shon");
    hordeAnnounce(N, arr);
    delete [] arr;
    return 0;
}