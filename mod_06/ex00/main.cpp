#include "Converter.hpp"

int main(int ac, char **argv){
    if (ac < 2 || ac > 2){
        std::cerr << "Need 1 argument to cast!" << std::endl;
        return 1;
    }
    std::string str(argv[1]);
    try{
        Converter   tmp = Converter(str);
        std::cout << tmp;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}
