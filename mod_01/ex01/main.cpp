#include "Zombie.hpp"
#include <iostream>

Zombie  *zombieHorde(int N, std::string name);

int main(void)
{
    Zombie  *arr;
    int     N;
    N = 3;
    arr = zombieHorde(N, "Bill Murray");
    for (int i = 0; i < N; i++){
        arr->announce();
    }
    delete [] arr;

    N = 5;
    arr = zombieHorde(N, "Shon");
    for (int i = 0; i < N; i++){
        arr->announce();
    }
    delete [] arr;
    return 0;
}