#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main()
{
    int N;
    std::cin >> N;
    std::map<std::string, int> prices;
    for(int i = 0; i < N ; i++)
    {
        std::string name;
        std::cin >> name;
        prices[name] = 0;
    }

    int M;
    std::cin >> M;
    for(int i = 0; i < M ; i++)
    {
        std::string name;
        std::cin >> name;
        int price;
        std::cin >> price;
        prices[name] += price;
    }

    std::vector<std::pair<int, std::string>> v_prices;
    auto itr = prices.begin();
    while(itr != prices.end())
    {
        v_prices.push_back({itr->second, itr->first});
        itr++;
    }

    std::sort(v_prices.begin(), v_prices.end());

    auto v_itr = v_prices.rbegin();
    while(v_itr != v_prices.rend())
    {
        std::cout << v_itr->second << std::endl;
        v_itr++;
    }

    return 0;
}