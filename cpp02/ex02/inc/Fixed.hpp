#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
    private: 
        int fix;
        static const int frac = 8;
     
    public: 
        Fixed();
        Fixed(const int a);
        Fixed(const float a);
        ~Fixed(); 
        Fixed(const Fixed &x);
        Fixed operator+(const Fixed &x) const;
        Fixed operator-(const Fixed &x) const;
        Fixed operator*(const Fixed &x)const;
        Fixed operator/(const Fixed &x)const;
        Fixed &operator++(void);
        Fixed &operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);
        Fixed &operator=(const Fixed &);
        bool operator>(const Fixed &x) const;
        bool operator <(const Fixed &x) const;
        bool operator>=(const Fixed &x) const;
        bool operator<=(const Fixed &x)const;
        bool operator==(const Fixed &x) const;
        bool operator!=(const Fixed &x) const;
        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawbits(int const raw);
        static Fixed min(Fixed &fix1, Fixed &fix2);
        static Fixed min(const Fixed &fix1, const Fixed &fix2);
        static Fixed max(Fixed &fix1, Fixed &fix2);
        static Fixed max(const Fixed &fix1, const Fixed &fix2);
};
        std::ostream  &operator<<(std::ostream &out, const Fixed &fixed);
