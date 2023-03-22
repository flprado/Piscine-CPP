#include "../inc/Fixed.hpp"


Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->a = 0;
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl ;
}

Fixed &Fixed::operator=(Fixed const &x)
{
    std::cout << "Copy assignement operator called" << std::endl;
    this->a = x.getRawBits();
    return (*this);
}

Fixed::Fixed(const Fixed &x)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = x;
}

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->a;
}

void Fixed::setRawbits(int const raw)
{
    this->a = raw;
}
