#include <iostream>
#include <string>

int main()
{
    std::string list, str, answer;
    std::cin >> list >> str;

    for(auto itr = str.begin(); itr != str.end(); itr++)
    {
        if(list.find(*itr) == std::string::npos)
        {
            if(std::isupper(*itr))
            {
                answer += std::tolower(*itr);
            }
            else
            {
                answer += std::toupper(*itr);
            }
        }
        else
        {
            answer += *itr;
        }
    }
    
    std::cout << answer << std::endl;

    return 0;
}