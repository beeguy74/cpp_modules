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
    std::cout << "Addition operator called\n";
    Fixed res;

    res.setRawBits(this->getRawBits() + other.getRawBits());
    return res;
}

std::ostream&   operator<<( std::ostream& out, Fixed const &other){
    out << other.toFloat();
    return out;
}