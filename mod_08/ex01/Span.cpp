#include "Span.hpp"

Span::Span(){
    this->_max = 0;
    return ;
}

Span::Span(unsigned int size){
    this->_max = static_cast<int>(size);
    this->_arr = std::vector<int>();
    return ;
}

Span::Span(const Span &other){
    this->operator=(other);
    return ;
}

Span::~Span(){
    return ;
}

Span    &Span::operator=(const Span &other){
    this->_max = other._max;
    this->_arr = std::vector<int>(other._arr);
    return *this;
}

int Span::longestSpan(){
    std::vector<int>::iterator  min_it;
    std::vector<int>::iterator  max_it;

    if (this->_arr.size() < 2){
        throw NotEnoughNumbsToSpan();
    }
    min_it = std::min_element(this->_arr.begin(), this->_arr.end());
    max_it = std::max_element(this->_arr.begin(), this->_arr.end());
    return (*max_it - *min_it);
}

int Span::shortestSpan(){
    if (this->_arr.size() < 2){
        throw NotEnoughNumbsToSpan();
    }
    std::sort(this->_arr.begin(), this->_arr.end(), std::greater<int>());

    std::vector<int>    res = std::vector<int>(this->_arr.begin(), this->_arr.end() - 1);

    std::transform(res.begin(), res.end(), this->_arr.begin() + 1, res.begin(), std::minus<int>());
    return *(std::min_element(res.begin(), res.end()));
}

void    Span::addNumber(int val){
    if (this->_max == 0){
        throw (std::out_of_range("Span max capacity is reached!"));
    }
    this->_arr.push_back(val);
    --this->_max;
    return ;
}

void    Span::display(){
    for (std::vector<int>::iterator it = this->_arr.begin(); it != this->_arr.end(); ++it)
        std::cout << *it << std::endl;
    return ;
}

const char  *Span::NotEnoughNumbsToSpan::what() const throw(){
    return ("Not enough numbers to span!");
}
