#include "Point.hpp"

bool    bsp(Point const x, Point const y, Point const z, 
                                        Point const needle){
    Fixed   k, m, n;//scalar product of vectors

    k = Point::trippleScalar(x, y, needle);
    m = Point::trippleScalar(y, z, needle);
    n = Point::trippleScalar(z, x, needle);
    return ((k > 0 && m > 0 && n > 0) || 
                    (k < 0 && m < 0 && n < 0));
}