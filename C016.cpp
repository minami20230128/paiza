#include <iostream>
#include <string>
#include <map>

int main()
{
    std::string S;
    std::cin >> S;

    std::map<std::string, std::string> leetmap = {{"A", "4"}, {"E", "3"}, {"G", "6"}, {"I", "1"}, {"O", "0"}, {"S", "5"}, {"Z", "2"}};
    auto itr = S.begin();

    while(itr != S.end())
    {
        auto litr = leetmap.begin();
        while(litr != leetmap.end())
        {
            if(std::string{*itr} == litr->first)
            {
                S.replace(itr, itr + 1, litr->second);
            }
            litr++;
        }
        if(itr != S.end()) itr++;
    }
    
    std::cout << S << std::endl;
    
    return 0;
}