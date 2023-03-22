#include "../inc/Fixed.hpp"


Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fix = 0;
}

Fixed::Fixed(const int a): fix(a<<frac)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float a): fix((int)roundf(a * (1 << frac)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl ;
}

Fixed &Fixed::operator=(Fixed const &x)
{
    std::cout << "Copy assignement operator called" << std::endl;
    this->fix = x.getRawBits();
    return (*this);
}

std::ostream  &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

Fixed::Fixed(const Fixed &x)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = x;
}

int Fixed::getRawBits(void)const
{
    return this->fix;
}

void Fixed::setRawbits(int const raw)
{
    this->fix= raw;
}

int Fixed::toInt(void) const
{
    return ((int)(roundf((float)this->fix / (1 << this->frac))));
}

float Fixed::toFloat(void) const
{
    return ((float)this->fix / (1 << this-> frac));
}