#ifndef _POINT_H_
#define _POINT_H_
# include "Fixed.hpp"

class Point{
private:
    Fixed const _x;
    Fixed const _y;

public:
    Point();
    ~Point();
    Point(const Point &other);
    Point(float const x, float const y);
    Point&          operator=(Point const &other);
    Fixed const&    getX() const;
    Fixed const&    getY() const;
    static Fixed    trippleScalar(Point const& first, Point const& second, Point const& needle);
};

#endif