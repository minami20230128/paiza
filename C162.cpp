#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    int card_num, shuffle_num;
    std::cin >> card_num >> shuffle_num;

    std::vector<int> cards(card_num);
    std::iota(cards.begin(), cards.end(), 1);

    for(int j = 0; j < shuffle_num; j++)
    {
        std::vector<int> former_cards(cards.begin(), cards.begin() + card_num / 2);
        std::vector<int> rather_cards(cards.begin() + card_num / 2, cards.end());
        cards.clear();
        for(int i = 0; i < former_cards.size(); i++)
        {
            cards.push_back(rather_cards[i]);
            cards.push_back(former_cards[i]);
        }
    }
    
    for(auto&& card : cards)
    {
        std::cout << card;
        if(card != *(cards.end() - 1))
        {
            std::cout << " ";
        }
    }
    
    std::cout << std::endl;

    return 0;
}