
#include "general.hpp"

int main(int argc,  char    **argv)
{
    (void)argc;
    (void)argv;
    int i = 0;
    phoneBook repertoir;
    while (i < 3)
    {
        std::cout << "";
        std::cin >> repertoir.contacts[i].firstName;
        std::cout << "ton prenom est " << repertoir.contacts[i].firstName;
        i++;
    }
    return (0);
}