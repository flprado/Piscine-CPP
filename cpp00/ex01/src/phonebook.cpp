
#include "general.hpp"

int main(int argc,  char    **argv)
{
    (void)argc;
    (void)argv;
   // int i = 0;
    std::string str;
    phoneBook repertory;
    repertory.nbContact = 0;
    std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
    while (str != "EXIT")
    {
        std::getline(std::cin, str);
        if (str == "EXIT")
            return (0);
        std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
        std::cout << "";
        if (str == "ADD")
            newContact(&repertory);
        if (str == "SEARCH")
            searchContact(&repertory);
    }
    return (0);
}