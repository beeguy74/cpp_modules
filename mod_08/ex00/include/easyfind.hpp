#ifndef _EASYFIND_H_
#define _EASYFIND_H_

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

template <typename T>

typename T::iterator easyfind(T &arr, int needle){
    typename T::iterator res;

    res = std::find(arr.begin(), arr.end(), needle);
    return res;
}

#endif