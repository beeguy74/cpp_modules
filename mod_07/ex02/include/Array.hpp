#ifndef _ARRAY_H_
#define _ARRAY_H_

# include <iostream>
# include <exception>
# include <cstring>

template <class T_CL>

class Array{
private:
    unsigned int    _len;
    T_CL            *_data;

public:
    Array(){
        this->_len = 0;
        this->_data = NULL;
        return ;
    }

    Array(unsigned int num){
        this->_len = num;
        this->_data = new T_CL[num];
        return ;
    }

    Array(const Array &other){
        this->_len = 0;
        this->_data = NULL;
        operator=(other);
        return ;
    }

    ~Array(){
        if (this->_data != NULL){
            delete[] this->_data;
        }
    }

    Array   &operator=(const Array &other){
        if (this->_data != NULL){
            delete[] this->_data;
        }
        this->_len = other._len;
        this->_data = new T_CL[this->_len];
        for (unsigned int i = 0; i < this->_len; ++i){
            this->_data[i] = other._data[i];
        }
        return *this;
    }

    T_CL    &operator[](int index){
        if (index < 0){
            throw std::out_of_range("Index out of array's size");
        }
        else if (static_cast<unsigned int>(index) >= this->_len){
            throw std::out_of_range("Index out of array's size");
        }
        return this->_data[index];
    }

    unsigned int    size() const { return this->_len;}
};

#endif