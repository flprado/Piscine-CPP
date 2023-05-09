#pragma once
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

class Span
{
    private:
        unsigned int _N;
        std::vector<int> _vec;
    public:
        Span();
        ~Span();
        Span(const Span &span);
        Span(const unsigned int N);

        Span &operator=(const Span &span);

        void addNumbers(int start, int size);
        void addNumber(int nb);
        int shortestSpan(void);

        class big : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Bigger than the size of the vector");
                }
        };

        class notEnoughNumbers : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Not enough Numbers");
                }
        };


};