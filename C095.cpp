#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string str, input;
    std::cin >> str;
    std::cin >> input;
    auto password = str;
    auto pre_input = input;
    //std::cout << input << std::endl;
    
    std::sort(str.begin(), str.end());
    std::sort(input.begin(), input.end());
    
    //std::cout << str << std::endl;
    //std::cout << pre_input << std::endl;
    //std::cout << password << std::endl;

    if(pre_input != password && input == str)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}