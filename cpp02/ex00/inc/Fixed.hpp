#pragma once
#include <iostream>


class Fixed
{
    private: 
        int fix;
        static const int frac = 8;
     
    public: 
        Fixed();
        ~Fixed(); 
        Fixed(const Fixed &x); 
        Fixed &operator=(const Fixed &);
        int getRawBits(void) const;
        void setRawbits(int const raw);
};
