#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string str;
    std::cin >> str;
    bool is_find = false;
    std::vector<std::string> prohibited = {"I", "l", "i"};
    for(int i = 0; i < prohibited.size(); i++)
    {
        if(str.find(prohibited[i]) != std::string::npos)
        {
            is_find = true;
        }
    }

    if(is_find)
    {
        std::cout << "caution" << std::endl;
    }
    else
    {
        std::cout << str << std::endl;
    }

    return 0;
}