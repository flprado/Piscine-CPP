
#include "general.hpp"

int main(int argc,  char    **argv)
{
    (void)argc;
    (void)argv;
   // int i = 0;
    std::string str;
    phoneBook repertory;
    std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
    std::cin >> str;
    while (str != "EXIT")
    {
        std::cout << "nb = " << repertory.nbContact << std::endl;
        std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
        std::cin >> str;
        std::cout << "";
        if (str == "ADD")
            newContact(&repertory);
        if (str == "SEARCH")
            searchContact(&repertory);
        //std::cin >> repertoir.contacts[i].firstName;
        //std::cout << "ton prenom est " << repertoir.contacts[i].firstName;
        //i++;
    }
    return (0);
}