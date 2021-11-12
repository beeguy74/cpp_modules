#ifndef _WHATEVER_H_
#define _WHATEVER_H_

#include <iostream>
#include <string>

template <typename FT>

void    swap(FT &a, FT &b){
    FT  tmp;

    tmp = a;
    a = b;
    b = tmp;
    return ;
}

template <typename FT>

FT  &min(FT &a, FT &b){
    return (a < b) ? a : b;
}

template <typename FT>

FT  &max(FT &a, FT &b){
    return (a > b) ? a : b;
}

#endif