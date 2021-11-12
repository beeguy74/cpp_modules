#ifndef _ITER_H_
#define _ITER_H_

# include <iostream>

template <typename T_PTR>

void    print(T_PTR &elem){
    std::cout << elem << std::endl;
    return ;
}

template <typename T_PTR, typename T_LEN>

void    iter(T_PTR *ptr, T_LEN len, void (*func)(T_PTR &elem)){
    for (T_LEN i = 0; i < len; ++i){
        func(ptr[i]);
    }
    return ;
}

#endif