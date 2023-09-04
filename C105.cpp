#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

int main()
{
    int N;
    std::cin >> N;
    std::vector<int> cards(N);
    for(auto&& card : cards)
    {
        std::cin >> card;
    }
    

    std::sort(cards.begin(), cards.end());
    auto itr = cards.begin();
    int prev = 0;
    int sum = 0;
    while(itr != cards.end())
    {
        if(*itr - prev != 1)
        {
            sum += prev;
        }
        if(itr == cards.end() - 1)
        {
            sum += *itr;
        }
        prev = *itr;
        itr++;
    }

    std::cout << sum << std::endl;

    return 0;
}

//前の数字との差が1でなければ追加
//配列の最後も必ず追加