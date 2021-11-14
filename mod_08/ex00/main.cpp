#include "easyfind.hpp"

int main(){
    std::vector<int> arr;
    std::vector<int>::iterator   it;

    for (int i = 0; i < 10; ++i){
        arr.push_back(i);
    }
    it = easyfind(arr, 4);
    while (it != arr.end()){
        std::cout << *it++ << std::endl;
    }
    
    return 0;
}
