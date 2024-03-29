#include <string>
#include <iostream>
#include <fstream>

std::string search_replace(std::string str, std::string word1, std::string word2)
{
    std::size_t found;

    found = str.find (word1);
    while (found != std::string::npos)
    {
        str.erase(found, word1.size());
        str.insert(found, word2);
        found = str.find(word1, found + word2.size());
    }
    return str;
}

int main(int argc, char **argv)
{
    std::string resultat;
    const char  *name;
    std::string line;
    std::string oui;
    std::ifstream myfile;

    if (argc != 4)
    {
        std::cout << "Wrong arguments" << std::endl;
        return 0;
    }

    myfile.open(argv[1], std::ios::in);
    if (!myfile)
    {
        std::cout << "no such file"  << std::endl;
        return 0;
    }

    resultat = argv[1] + (std::string)".replace";
    name = resultat.c_str();
    std::ofstream outfile (name);
    while (!myfile.eof())
    {     
        std::getline(myfile, line);
        oui = search_replace(line, argv[2], argv[3]);
        outfile << oui;
        if (!myfile.eof())
            outfile << std::endl;
    }
    outfile.close();
    return 0;
}