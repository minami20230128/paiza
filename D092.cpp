#include <iostream>
#include <map>
#include <vector>

int main()
{
    std::vector<std::pair<float, std::string>> prices;
    for(int i = 0; i < 2; i++)
    {
        int x, y, p;
        std::cin >> x >> y >> p;
        std::string input = std::to_string(x) + " " + std::to_string(y) + " " + std::to_string(p);
        int area = x * y;
        float price_per_area = (float) p / area;
        prices.push_back(std::make_pair(price_per_area, input));
    }

    //std::cout << prices[0].first;
    //std::cout << prices[1].first;
    if(prices[0].first > prices[1].first)
    {
        std::cout << prices[1].second;
    }
    else if(prices[1].first > prices[0].first)
    {
        std::cout << prices[0].second;
    }
    else
    {
        std::cout << "DRAW";
    }
    return 0;
}