#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base    *generate(void){
    Base    *ptr;
    int     rnd;

    srand(time(NULL));
    rnd = (rand() % 10 + 2) / 3;
    switch (rnd){
        case 3: ptr = new A;
                break ;
        case 2: ptr = new B;
                break ;
        default: ptr = new C;
    }
    return ptr;
}

void    identify(Base *p){
    std::string res;
    A           *a;
    B           *b;
    C           *c;

    a = dynamic_cast<A *>(p);
    b = dynamic_cast<B *>(p);
    c = dynamic_cast<C *>(p);
    if (a){
        res = "A";
    }
    else if (b){
        res = "B";
    }
    else if (c){
        res = "C";
    }
    std::cout << res << std::endl;
    return ;
}

void    identify(Base &p){
    std::string res;

    try{
        A &a = dynamic_cast<A &>(p);
        (void)a;
        res = "A";
        std::cout << res << std::endl;
    }
    catch (std::exception &e){}
    try{
        B &b = dynamic_cast<B &>(p);
        (void)b;
        res = "B";
        std::cout << res << std::endl;
    }
    catch (std::exception &e){}
    try{
        C &c = dynamic_cast<C &>(p);
        (void(c));
        res = "C";
        std::cout << res << std::endl;
    }
    catch (std::exception &e){}
    return ;
}

int main(void){
    Base    *ptr;

    ptr = generate();
    identify(ptr);
    identify(*ptr);
    delete ptr;
    return 0;
}
