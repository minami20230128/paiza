#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> horizons(5);
    for(auto&& hor : horizons)
    {
        std::cin >> hor;
    }

    std::string winner = "";
    for(auto&& hor : horizons)
    {
        std::cout << hor << std::endl;
        if(std::adjacent_find(hor.begin(), hor.end(), std::not_equal_to<char>()) == hor.end())
        {
            winner = hor[0];
        }
    }

    if(winner == "" || winner == ".")
    {
        winner = "D";
    }
    
    std::cout << winner << std::endl;

    return 0;
}