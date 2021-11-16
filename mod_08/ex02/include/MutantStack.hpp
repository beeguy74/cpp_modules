#ifndef _MUTANTSTACK_H_
#define _MUTANTSTACK_H_

#include <iostream>
#include <stack>
#include <algorithm>

template <class T>
class MutantStack: public std::stack<T>{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;

    MutantStack<T>(){}

    MutantStack<T>(const MutantStack<T> &other): std::stack<T>(other){}

    ~MutantStack<T>(){}

    MutantStack&
    operator=(const MutantStack<T> &other){
        return (std::stack<T>::operator=(other));
    }


    iterator    begin(){
        return (std::stack<T>::c.begin());
    }

    iterator    end(){
        return (std::stack<T>::c.end());
    }

    void    display(){
        iterator it = this->begin();
        iterator ite = this->end();

        while (it != ite)
        {
            std::cout << *it << " ";
            ++it;
        }
        std::cout << std::endl;

        return ;
    }
};

#endif