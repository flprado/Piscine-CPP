#include "EasyFind.hpp"

int main(void)
{
    std::vector<int> vec;
    for (int index = 0; index < 5; index++)
        vec.push_back(index);
    std::vector<int>::iterator it = vec.begin();
    while (it != vec.end())
    {
        std::cout << *it << ' ';
        ++it;
    }
    std::cout << std::endl;
    try
    {
        EasyFind(vec, 1);
        EasyFind(vec, 7);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl << std::endl;

    std::list<int> li(10);
    std::iota(li.begin(), li.end(), 0);
    std::list<int>::iterator iter = li.begin();
    while (iter != li.end())
    {
        std::cout << *iter << ' ';
        ++ iter ;
    }
    std::cout << std::endl;
    try
    {
        EasyFind(li, 7);
        EasyFind(li, 17);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}