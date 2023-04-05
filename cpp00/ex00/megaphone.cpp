#include <cctype>
#include <string>
#include <cstring>
#include <iostream>

void    toUpper(std::string str)
{
    int i;

    i = 0;
    while (i < (int)str.size())
    {
        std::cout << (char)toupper(str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc > 1)
    {
        while (i != argc)
        {
            toUpper((std::string)argv[i]);
            i++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
    std::cout << std::endl;
    return (0);
}