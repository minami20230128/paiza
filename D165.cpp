#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cin >> str;
    int length = 4;
    bool IsOK = true;
    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < length; j++)
        {
            if(i == j)
            {
                continue;
            }

            if(std::string{str[i]} == std::string{str[j]})
            {
                IsOK = false;
                break;
            }
        }
    }

    if(IsOK)
    {
        std::cout << "OK";
    }
    else
    {
        std::cout << "NG";
    }
    return 0;
}