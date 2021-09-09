#include "Karen.hpp"

int main(int argc, char **argv){
    Karen   inst;

    if (argc != 2){
        std::cout << "One argumet needed!\n";
        return (0);
    }
    inst.setLevel(argv[1]);
    return (0);
}