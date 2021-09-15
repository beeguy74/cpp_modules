#include "Point.hpp"

Point::Point(): _x(0), _y(0){
    return ;
}

Point::~Point(){
    return ;
}

Point::Point(float const x, float const y): _x(x), _y(y){
    return ;
}

Point::Point(Point const& other): 
    _x(other.getX()), 
    _y(other.getY()) {}

Point&  Point::operator=(Point const& other){
    other.getX();
    return *this;
}

Fixed const & Point::getX() const{
    return this->_x;
}

Fixed const & Point::getY() const{
    return this->_y;
}


Fixed    Point::trippleScalar(Point const& first, Point const& second, Point const& needle){
    Fixed res;

    res = (first.getX() - needle.getX()) * (second.getY() - first.getY()) 
                - (second.getX() - first.getX()) * (first.getY() - needle.getY());
    return res;
}