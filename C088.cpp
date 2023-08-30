#include <iostream>
#include <map>

int main()
{
    int N;
    std::cin >> N;
    std::map<int, int> prices;
    for(int i = 0; i < N; i++)
    {
        int price;
        std::cin >> price;
        prices[i + 1] = price;
    }

    int gold, num;
    std::cin >> gold;
    std::cin >> num;
    for(int i =0; i< num; i++)
    {
        int x, k;
        std::cin >> x;
        std::cin >> k;
        //std::cout << prices[x] * k  << std::endl;
        gold = prices[x] * k > gold ? gold : gold - prices[x] * k;
    }

    std::cout << gold << std::endl;

    return 0;
}