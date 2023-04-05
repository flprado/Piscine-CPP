
#include "general.hpp"

int main(int argc,  char    **argv)
{
    (void)argc;
    (void)argv;
    std::string str;
    phoneBook repertory;
    repertory.nbContact = 0;
    while (str != "EXIT" || std::cin.eof())
    {
        if (str == "EXIT" || std::cin.eof())
            return (0);
        std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
        std::getline(std::cin, str);
        std::cout << "";
        if (str == "ADD")
            newContact(&repertory);
        if (str == "SEARCH")
            searchContact(&repertory);
    }
    return (0);
}