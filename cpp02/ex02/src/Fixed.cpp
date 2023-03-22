#include "../inc/Fixed.hpp"


Fixed::Fixed()
{
    this->fix = 0;
}

Fixed::Fixed(const int a): fix(a<<frac)
{
}

Fixed::Fixed(const float a): fix((int)roundf(a * (1 << frac)))
{
}

Fixed::~Fixed()
{
}

//OPERATORS

Fixed &Fixed::operator=(Fixed const &x)
{
    this->fix = x.getRawBits();
    return (*this);
}

Fixed Fixed::operator+(const Fixed &x) const
{
    return (Fixed(this->toFloat() + x.toFloat()));
}

Fixed Fixed::operator-(const Fixed &x) const
{
    return (Fixed(this->toFloat() - x.toFloat()));
}

Fixed Fixed::operator*(const Fixed &x) const
{
    return (Fixed(this->toFloat() * x.toFloat()));
}

Fixed Fixed::operator/(const Fixed &x) const
{
    return (Fixed(this->toFloat() / x.toFloat()));
}

bool Fixed::operator>(const Fixed &x) const
{
    return ((this->toFloat() > x.toFloat()));
}

bool Fixed::operator<(const Fixed &x) const
{
    return ((this->toFloat() < x.toFloat()));
}

bool Fixed::operator>=(const Fixed &x) const
{
    return ((this->toFloat() >= x.toFloat()));
}

bool Fixed::operator<=(const Fixed &x) const
{
    return ((this->toFloat() <= x.toFloat()));
}

bool Fixed::operator==(const Fixed &x) const
{
    return ((this->toFloat() == x.toFloat()));
}

bool Fixed::operator!=(const Fixed &x) const
{
    return ((this->toFloat() != x.toFloat()));
}

Fixed &Fixed::operator++(void)
{
    this->fix++;
    return (*this);
}

Fixed &Fixed::operator--(void)
{
    this->fix--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed aux = *this;
    operator++();
    return aux;
}

Fixed Fixed::operator--(int)
{
    Fixed aux = *this;
    operator--();
    return aux;
}


std::ostream  &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

Fixed::Fixed(const Fixed &x)
{
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

Fixed Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
    if (fix1 > fix2)
        return Fixed(fix2);
    return(Fixed(fix1));
}

Fixed Fixed::min(Fixed &fix1, Fixed &fix2)
{
    if (fix1 > fix2)
        return Fixed(fix2);
    return Fixed(fix1);
}

Fixed Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
    if (fix1 >= fix2)
        return Fixed(fix1);
    return Fixed(fix2);
}

Fixed Fixed::max(Fixed &fix1, Fixed &fix2)
{
    if (fix1 >= fix2)
        return Fixed(fix1);
    return Fixed(fix2);
}