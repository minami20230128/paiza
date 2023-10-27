#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cin >> str;
    auto itr = str.begin();
    auto prev = *itr;
    bool is_same = true;
    while(itr != str.end())
    {
        itr++;
        if(*itr != prev)
        {
            is_same = false;
        }
        prev = *itr;
    }

    if(is_same)
    {
        std::cout << "No" << std::endl;
    }
    else
    {
        std::cout << str << std::endl;
    }
    return 0;
}