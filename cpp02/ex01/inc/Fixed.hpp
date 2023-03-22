#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
    private: 
        int fix;
        static const int frac = 8;
     
    public: 
        Fixed(); // constructeur par defaut: Fixed a()
        Fixed(const int a);//todo
        Fixed(const float a);//todo
        ~Fixed(); // appele tout seul
        Fixed(const Fixed &x); // constructeur copie fixed b = Fixed(a)
        Fixed &operator=(const Fixed &);
        float toFloat(void) const;//todo
        int toInt(void) const;//todo
        int getRawBits(void) const;
        void setRawbits(int const raw);
};
        std::ostream  &operator<<(std::ostream &out, const Fixed &fixed);//todo
