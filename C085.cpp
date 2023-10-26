#include <iostream>
#include <map>
#include <string>
#include <vector>

int main()
{
    int ascii = 92;
    std::vector<std::pair<char, int>> keys(26);

    for(int i = 0; i < 26; i++)
    {
        int durability;
        std::cin >>durability;
        auto str = (char) ascii;
        keys.push_back(std::make_pair(str, durability));

    }

    std::string input;
    std::cin >> input;
    auto itr = input.begin();
   
    while(itr != input.end())
    {
        auto kitr = keys.begin();
        while(kitr != keys.end())
        {
            if(*itr == kitr->first)
            {
                if(kitr->second == 0)
                {
                    continue;
                }
                kitr->second--;
                std::cout << kitr->first << std::endl;
            }
            kitr++;
        }
        
        itr++;
    }

    return 0;
}

abcbcb
abcbcb