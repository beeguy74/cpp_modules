#include "whatever.hpp"
#include "Fixed.hpp"

int main(){
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    Fixed a1 = Fixed(10);
    Fixed b1 = Fixed(2.1f);

    std::cout << "MIN: " << min(a1, b1) << std::endl;
    std::cout << "MAX: " << max(a1, b1) << std::endl;
    swap(a1, b1);
    std::cout << "A: " << a1 << std::endl;
    std::cout << "B:" <<  b1 << std::endl;
    return 0;
}
