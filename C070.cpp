#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int N;
    std::cin >> N;
    std::vector<int> cards(N);
    for(auto&& card : cards)
    {
        std::cin >> card;
    }

    for(auto&& card : cards)
    {
        //std::cout << card << std::endl;
        std::string str = std::to_string(card);
        std::sort(str.begin(), str.end());
        
        if(str[0] == str[3])
        {
            std::cout << "Four Card" << std::endl;
            continue;
        }
        if(str[0] == str[2] || str[1] == str[3])
        {
            std::cout << "Three Card" << std::endl;
            continue;
        }
        if(str[0] == str[1] && str[2] == str[3])
        {
            std::cout << "Two Pair" << std::endl;
            continue;
        }
        
        if(str[0] == str[1] || str[1] == str[2] || str[2] == str[3])
        {
            std::cout << "One Pair" << std::endl;
            continue;
        }
        
        std::cout << "No Pair" << std::endl;
    }

    return 0;
}