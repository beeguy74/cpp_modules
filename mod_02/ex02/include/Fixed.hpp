#ifndef _FIXED_H_
#define _FIXED_H_
# include <iostream>
# include <cmath>

class Fixed
{
private:
    int                 _value;
    static const int    _fractionalBits;
    static const int    _exhibitor;
public:
    Fixed();
    Fixed(int const value);
    Fixed(float const value);
    Fixed(const Fixed &other);
    ~Fixed();

    void    setRawBits(int const raw);
    int     getRawBits() const;
    float   toFloat() const;
    int     toInt() const;
    Fixed&              operator=(const Fixed &other);
    Fixed               operator+(const Fixed &other) const;
    Fixed               operator-(const Fixed &other) const;
    Fixed               operator*(const Fixed &other) const;
    Fixed               operator/(const Fixed &other) const;
    bool                operator>(const Fixed &other) const;
    bool                operator<(const Fixed &other) const;
    bool                operator>=(const Fixed &other) const;
    bool                operator<=(const Fixed &other) const;
    bool                operator==(const Fixed &other) const;
    bool                operator!=(const Fixed &other) const;
    Fixed&              operator++();//Prefix operator
    Fixed&              operator--();
    Fixed               operator--(int);//Postfix operator
    Fixed               operator++(int);

    static Fixed&       min(Fixed& first, Fixed& second);
    static Fixed&       max(Fixed& first, Fixed& second);
    static const Fixed& min(const Fixed& first, const Fixed& second);
    static const Fixed& max(const Fixed& first, const Fixed& second);
};

std::ostream&   operator<<( std::ostream& out, Fixed const &other);

#endif