#include <string>
#include <iostream>
#include <fstream>

std::string search_replace(std::string str, std::string word1, std::string word2)
{
    std::size_t found;

    (void)word2;
    found = str.find (word1);
    //Nouveau found = str.find(word1 + word2.size);
    std::cout << found << std::endl;
    str.erase(found, word1.size());
    str.insert(found, word2);
    std::cout << str << std::endl;
    return str;
}

int main(int argc, char **argv)
{
    std::string resultat;
    std::string replace = ".replace";
    if (argc != 4)
    {
        std::cout << "Wrong arguments" << std::endl;
        return 0;
    }

    resultat = argv[1] + replace;
    //std::ofstream (resultat);
    search_replace("coucou lourd je suis une mit cache", "lourd", "qwer");
}