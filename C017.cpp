#include <iostream>

class Card
{
    public:
    int first;
    int second;
    
    Card(int first, int second)
    {
        this->first = first;
        this->second = second;
    }

    bool is_winning(Card card)
    {
        if(this->first > card.first || (this->first == card.first && this->second < card.second))
        {
            return true;
        }

        return false;
    }
};

int main()
{
    int first, second;å
    std::cin >> first >> second;
    auto parent = Card(first, second);

    int child_num;
    std::cin >> child_num;
    for(int i = 0; i < child_num; i++)
    {
        int c_first, c_second;
        std::cin >> c_first >> c_second;
        auto child = Card(c_first, c_second);

        if(parent.is_winning(child))
        {
            std::cout << "High" << std::endl;
        }
        else
        {
            std::cout << "Low" << std::endl;
        }
    }
    return 0;
}