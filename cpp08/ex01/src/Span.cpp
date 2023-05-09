#include "Span.hpp"

Span::Span() : _N(0)
{
    return ;
}

Span::Span(const unsigned int N) : _N(N)
{
    return ;
}

Span::~Span()
{
    _vec.clear();
    return ;
}

Span::Span(const Span &span)
{
    *this = span;
}

Span &Span::operator=(const Span &span)
{
    if (this != &span)
    {
        this->_vec.clear();
        this->_N = span._N;
        this->_vec = span._vec;
    }
    return *this;
}

void Span::addNumbers(int start, int size)
{
    if (_vec.size() >= this->_N)
        throw big();
    for (int i = 0; i < size; i++, start++)
        _vec.push_back(start);
}

void Span::addNumber(int nb)
{
    if (_vec.size() >= this->_N)
        throw big();
    _vec.push_back(nb);
}

int Span::shortestSpan(void)
{
    std::vector<int> copy = _vec;
    long    res = std::numeric_limits<long>::max();

    if (_vec.size() <= 1)
        throw Span::notEnoughNumbers();
    
    sort(copy.begin(), copy.end());
    for(size_t i = 0; i + 1 < _vec.size(); i ++)
        res = std::min(res, static_cast<long>(copy[i + 1] - copy[i]));
    return res;
}