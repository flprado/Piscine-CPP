#pragma once
#include <iostream>


class Fixed
{
    private: 
        int a;
        static const int b;
     
    public: 
        Fixed(); // constructeur par defaut: Fixed a()
        ~Fixed(); // appele tout seul
        Fixed(const Fixed &x); // constructeur copie fixed b = Fixed(a)
        Fixed &operator=(const Fixed &);
        int getRawBits(void) const;
        void setRawbits(int const raw);
};
