#include "iter.hpp"
#include "Fixed.hpp"

int main(){
    Fixed   arr[4] = {0, 1, 2, 3};

    iter(arr, 4, print);
    return 0;
}
