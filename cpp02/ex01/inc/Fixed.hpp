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
        Fixed &operator=(const Fixed &);
        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawbits(int const raw);
};
        std::ostream  &operator<<(std::ostream &out, const Fixed &fixed);
