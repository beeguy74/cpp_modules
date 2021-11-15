#ifndef _ADD_NUMBER_H_
#define _ADD_NUMBER_H_

# include "Span.hpp"

template <typename T_ITERATOR>

void    Span::addNumber(T_ITERATOR begin, T_ITERATOR end){
    int dist = std::distance(begin, end);
    int old_size = this->_arr.size();

    if (dist > this->_max){
        throw (std::out_of_range("Span max capacity is reached!"));
    }
    this->_max -= dist;
    this->_arr.resize(old_size + dist);
    std::copy(begin, end, this->_arr.begin() + old_size);
    return ;
}

#endif