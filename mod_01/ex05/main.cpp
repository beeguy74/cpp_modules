#include "Karen.hpp"

int main(void){
    Karen   inst;

    std::cout << "leve DEBUG:\n\t";
    inst.comlain("DEBUG");
    std::cout << "leve INFO:\n\t";
    inst.comlain("INFO");
    std::cout << "leve WARNING:\n\t";
    inst.comlain("WARNING");
    std::cout << "leve ERROR:\n\t";
    inst.comlain("ERROR");
    return (0);
}