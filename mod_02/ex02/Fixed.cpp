#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;
const int Fixed::_exhibitor = 1 << Fixed::_fractionalBits;

Fixed::Fixed() : _value(0){
    std::cout << "Default constructor called\n";
    return ;
}

Fixed::Fixed(Fixed const &other){
    std::cout << "Copy constructor called\n";
    this->operator=(other);
    return ;
}

Fixed::Fixed(int const value){
    std::cout << "Int constructor called\n";
    this->_value = value << this->_fractionalBits;
    return ;
}

Fixed::Fixed(float const value){
    std::cout << "Float constructor called\n";
    this->_value = static_cast<int>(roundf(value * this->_exhibitor));
    return ;
}


Fixed::~Fixed(){
    std::cout << "Destructor called\n";
    return ;
}

void    Fixed::setRawBits(int const raw){
    this->_value = raw;
    return ;
}

int     Fixed::getRawBits() const{
    return this->_value;
}

int     Fixed::toInt() const{
    return this->_value >> this->_fractionalBits;
}

float   Fixed::toFloat() const{
    float   res;

    res = static_cast<float>(this->_value) / this->_exhibitor;
    return res;
}

Fixed& Fixed::operator=(const Fixed &other){
    std::cout << "Assignation operator called\n";
    this->_value = other.getRawBits();
    return *this;
}

Fixed   Fixed::operator+(const Fixed &other) const{
    Fixed res;

    res.setRawBits(this->getRawBits() + other.getRawBits());
    return res;
}

Fixed   Fixed::operator-(const Fixed &other) const{
    Fixed res;

    res.setRawBits(this->getRawBits() - other.getRawBits());
    return res;
}

Fixed   Fixed::operator*(const Fixed &other) const{
    Fixed   res;
    int     tmp;

    tmp = this->getRawBits() * other.getRawBits();
    if (other.getRawBits() != 0 && tmp / other.getRawBits() != this->getRawBits()){
        std::cout << "Overflow!\n";
        int firstInt = this->toInt();
        int secondInt = other.toInt();
        int firstFl = this->getRawBits() & (this->_exhibitor - 1);
        int secondFl = other.getRawBits() & (this->_exhibitor - 1);
        tmp = (firstInt * secondInt) * this->_exhibitor + \
                    (firstFl * secondFl) * this->_exhibitor + \
                    firstInt * secondFl + secondInt * firstFl;
        res.setRawBits(tmp);
    }
    else{
        res.setRawBits(tmp / this->_exhibitor);
    }
    return res;
}

Fixed   Fixed::operator/(const Fixed &other) const{
    Fixed   res;

    res.setRawBits(this->getRawBits() * this->_exhibitor / other.getRawBits());
    return res;
}

Fixed&       min(Fixed& first, Fixed& second){
    if (first.getRawBits() < second.getRawBits()){
        return first;
    }
    return second;
};

Fixed&       max(Fixed& first, Fixed& second){
    if (first.getRawBits() > second.getRawBits()){
        return first;
    }
    return second;
};

const Fixed& min(const Fixed& first, const Fixed& second){
    if (first.getRawBits() < second.getRawBits()){
        return first;
    }
    return second;
};

const Fixed& max(const Fixed& first, const Fixed& second){
    if (first.getRawBits() > second.getRawBits()){
        return first;
    }
    return second;
};


std::ostream&   operator<<( std::ostream& out, Fixed const &other){
    out << other.toFloat();
    return out;
}