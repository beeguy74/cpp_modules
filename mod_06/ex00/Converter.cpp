#include "Converter.hpp"

Converter::Converter(): _num(0){
    return ;
}

Converter::Converter(std::string &str){
    char    *end;
    std::string msg = "Wrong argument!";

    this->_num = strtod(str.c_str(), &end);
    if (this->_num == 0.0 && *end != 0 && *(end + 1) == 0){
        this->_num = static_cast<double>(*end);
    }
    else if (*end != 0 && *end != 'f'){
        throw (BadCastException(msg));
    }
    else if (*end == 'f' && *(end + 1) != 0){
        throw (BadCastException(msg));
    }
    return ;
}

Converter::Converter(const Converter &other){
    this->operator=(other);
    return ;
}

Converter::~Converter(){
    return ;
}

Converter   &Converter::operator=(const Converter &other){
    this->_num = other._num;
    return *this;
}

void        Converter::_checkNanInf(){
    std::string msg_imp = "impossible";

    switch (fpclassify(this->_num)){
        case FP_INFINITE:
            throw (BadCastException(msg_imp));
        case FP_NAN:
            throw (BadCastException(msg_imp));
    }
    return ;
};

Converter::operator char(){
    std::string msg = "Non displayable";

    this->_checkNanInf();
    if (!(this->_num >= 33 && this->_num <= 255)){
        throw (BadCastException(msg));
    }
    return static_cast<char>(this->_num);
}

Converter::operator float(){
    return static_cast<float>(this->_num);
}

Converter::operator int(){
    std::string msg_imp = "impossible";

    this->_checkNanInf();
    if (this->_num > INT_MAX || this->_num < INT_MIN){

        throw (BadCastException(msg_imp));
    }
    return static_cast<int>(this->_num);
}

Converter::operator double(){
    return this->_num;
}

std::ostream    &operator<<(std::ostream &os, Converter &other){
    os << "char: ";
    try{
        char c = other;
        os << "\'" << c << "\'" << std::endl;
    }
    catch (std::exception &e){
        os << e.what() << std::endl;
    }
    os << "int: ";
    try{
        int num = other;
        os << num << std::endl;
    }
    catch (std::exception &e){
        os << e.what() << std::endl;
    }
    float f = other;
    os << "float: " << f << ((f - floor(f) == 0.)? ".0": "") << "f" << std::endl;
    double d = other;
    os << "float: " << d << ((d - floor(d) == 0.)? ".0": "") << std::endl;
    return os;
}

Converter::BadCastException::BadCastException(): _msg(""){
    return ;
}

Converter::BadCastException::BadCastException(std::string &msg): _msg(msg){
    return ;
}

const char  *Converter::BadCastException::what() const throw(){
    return this->_msg.c_str();
}
