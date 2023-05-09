#include "Span.hpp"

int main()
{
    try
    {
        Span span(50);
        span.addNumber(1);
        span.addNumber(3);
        span.addNumber(2);
        span.addNumbers(4, 47);
        std::cout << "shortest span : " << span.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}