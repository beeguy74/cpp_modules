#include "serialize.hpp"

int main(void){
    Data      data;
    Data      *de_data;
    uintptr_t   raw;

    data.str = std::string("Hello");
    data.num = 5;
    std::cout << "before str: " << data.str << std::endl
        << "before num: " << data.num << std::endl;
    raw = serialize(&data);
    std::cout << "raw ptr: " << raw << std::endl;
    de_data = deserialize(raw);
    std::cout << "after str: " << de_data->str << std::endl
        << "after num: " << de_data->num << std::endl;
    return 0;
}
