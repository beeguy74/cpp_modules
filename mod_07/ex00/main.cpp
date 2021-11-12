#include "whatever.hpp"
#include "Fixed.hpp"

int main(){
    std::string hello = " Hello";
    std::string world = " world";

    std::cout << "MIN: " << min(hello, world) << std::endl;
    std::cout << "MAX: " << max(hello, world) << std::endl;
    swap(hello, world);
    std::cout << "H: " <<hello << std::endl;
    std::cout << "W: " << world << std::endl;

    Fixed a = Fixed(10);
    Fixed b = Fixed(2.1f);

    std::cout << "MIN: " << min(a, b) << std::endl;
    std::cout << "MAX: " << max(a, b) << std::endl;
    swap(a, b);
    std::cout << "A: " << a << std::endl;
    std::cout << "B:" <<  b << std::endl;
    return 0;
}
