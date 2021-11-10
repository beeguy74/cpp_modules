#ifndef _CONVERTER_H_
#define _CONVERTER_H_

# include <iostream>
# include <string>
# include <cstdlib>
# include <exception>
# include <typeinfo>
# include <cmath>

class Converter{
private:
    double  _num;
    void    _checkNanInf();

public:
    Converter();
    Converter(std::string &str);
    Converter(const Converter &other);
    virtual ~Converter();

    operator char();
    operator float();
    operator int();
    operator double();
    Converter   &operator=(const Converter &other);

    class BadCastException: public std::exception{
    private:
        std::string _msg;
        BadCastException();
    public:
        BadCastException(std::string &msg);
        ~BadCastException() throw() {};
        const char  *what() const throw();
    };
};

std::ostream    &operator<<(std::ostream &os, Converter &other);

#endif