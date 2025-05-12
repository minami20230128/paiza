#include <iostream>
#include <vector>

int main()
{
    std::vector<int> coins = {500, 100, 50, 10, 5, 1};
    int price;
    std::cin >> price;

    int sum = 0;
    for(auto&& coin : coins)
    {
        while(price - coin >= 0)
        {
            sum += 1;
            price -= coin;
            
            //std::cout << price << std::endl;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}