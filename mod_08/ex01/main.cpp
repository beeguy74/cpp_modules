#include "Span.hpp"
#include "addNumber.hpp"


void    test(){
    int tst[] = {1, 2, 3, 4, 5, 6, 7, 8};
    Span sp = Span(9);

    sp.addNumber(11);
    std::cout << "Try to span with 1 number:" << std::endl;
    try{
        sp.shortestSpan();
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "before addNumber by iterators" << std::endl;
    sp.display();
    sp.addNumber(tst, tst + 8);
    std::cout << "after addNumber by iterators" << std::endl;
    sp.display();
    std::cout << "Trying add one more number:" << std::endl;
    try{
        sp.addNumber(1232);
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "Shortest and longest span:" << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return ;
}

int RandomNumber () { return (std::rand()%1000000 + 11); }

struct c_unique {
  int current;
  c_unique() {current=0;}
  int operator()() {return ++current;}
} UniqueNumber;

int main(){
    test();
    Span sp = Span(11000);
    std::vector<int> myVector (11000);

    std::srand(unsigned(std::time(0)));
    std::generate(myVector.begin(), myVector.end(), UniqueNumber);
    sp.addNumber(myVector.begin(), myVector.end());

    std::cout << "Shortest and longest span:" << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}
