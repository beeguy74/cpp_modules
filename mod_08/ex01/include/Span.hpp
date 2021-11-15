#ifndef _SPAN_H_
#define _SPAN_H_

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <exception>
#include <ctime>
#include <cstdlib>

class Span{
private:
    std::vector<int>    _arr;
    int                 _max;
    Span();
public:
    Span(unsigned int size);
    Span(const Span &other);
    ~Span();

    Span    &operator=(const Span &other);
    void    display();
    int     shortestSpan();
    int     longestSpan();
    void    addNumber(int val);
    template <typename T_ITERATOR>
    void    addNumber(T_ITERATOR begin, T_ITERATOR end);

    class NotEnoughNumbsToSpan: public std::exception{
    public:
        const char  *what() const throw();
    };
};


#endif