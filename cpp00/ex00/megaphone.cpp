#include <cctype>
#include <string>
#include <iostream>

void    to_upper(char   *str)
{
    int i;

    i = 0;
    while (i < (int)strlen(str))
    {
        std::cout << (char)toupper(str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    int i;

    i = 1;
    if (argc > 1)
    {
        while (i != argc)
        {
            to_upper((char  *)argv[i]);
            i++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE NOISE *";
    return (0);
}