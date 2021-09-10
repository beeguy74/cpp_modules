#include "Fixed.hpp"

Fixed::Fixed() : _value(0){
    std::cout << "Default constructor called\n";
    return ;
}

Fixed::Fixed(const Fixed &other){
    std::cout << "Copy constructor called\n";
    this->operator=(other);
    return ;
}

Fixed::~Fixed(){
    std::cout << "Destructor called\n";
    return ;
}

Fixed& Fixed::operator=(const Fixed &other){
    std::cout << "Assignation operator called\n";
    this->_value = other.getRawBits();
    return *this;
}

void    Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called\n";
    this->_value = raw;
    return ;
}

int     Fixed::getRawBits() const{
    std::cout << "getRawBits member function called\n";
    return this->_value;
}

const int Fixed::_fractionalBits = 8;
