#include "Iter.hpp"

int main(void)
{
    int tab[3] = {0, 1, 2};
    std::string letter[] = {"zero", "one", "two"};
    ::iter(tab, 3, &printData);
    std::cout << std::endl;
    ::iter(letter, 3, &printData);
}