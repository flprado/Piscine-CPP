#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cmath>

void    print_nan(void)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}

void    print_inf(char s)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << s << "inf" << std::endl;
    std::cout << "double: " << s << "inf" << std::endl;
}

void    print(double n)
{
    if (n > CHAR_MAX || n < CHAR_MIN)
        std::cout << "char: impossible" << std::endl;
    else if (isprint(n))
        std::cout << "char: " << static_cast<char>(n) << std::endl;
    else
        std::cout << "char: non displayable" << std::endl;

    if (n > INT32_MAX || n < INT32_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(n) << std::endl;

    std::cout << "float: " << static_cast<float>(n) << std::endl;
    std::cout << "double: " << static_cast<double>(n) << std::endl;
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "usage : ./conv <valeur>" << std::endl;
        return (1);
    }
    
    std::string st = argv[1];
    char *        r[1] = {0};
    double        n = strtod(st.c_str(), r); //string to double

    if (st.size() == 1)
    {
        if (isdigit(st.front()))
            st[0] = st.front() - 48;
        print(st.front());
    }
    else if (!st.compare("-inff") || !st.compare("-inf"))
        print_inf('-');
    else if (!st.compare("+inff") || !st.compare("+inf"))
        print_inf('+');
    else if ((*r && *r[0] && *r[0] != 'f') || (st.find('f') != std::string::npos && st.find('f') != (st.size() - 1)))
        print_nan();
    else
        print(n);
    return (0);
}