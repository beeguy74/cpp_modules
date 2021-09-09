#ifndef _FIXED_H_
#define _FIXED_H_
# include <iostream>

class Fixed
{
private:
    int                 _value;
    static const int    _fractionalBits;
public:
    Fixed();
    Fixed(const Fixed &other);
    ~Fixed();

    Fixed& operator=(const Fixed &other);
    void                setRawBits(int const raw);
    int                 getRawBits();
};

#endif