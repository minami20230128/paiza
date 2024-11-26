#include <iostream>
#include <vector>

class Magazine
{
    public:
    int price;
    int frequency;

    Magazine(int price, int frequency)
    {
        this->price = price;
        this->frequency = frequency;
    }
};

std::vector<Magazine*> get_magazines_sent_week(std::vector<Magazine*> magazines, int week_index)
{
    std::vector<Magazine*> result; 
    for(auto magazine : magazines)
    {
        if((week_index - 1) % magazine->frequency == 0 || week_index == 1)
        {
            result.push_back(magazine);
        }
    }

    return result;
}

int main()
{
    std::vector<Magazine*> magazines;

    int N, M;
    std::cin >> N >> M;

    for(int i = 0; i < N; i ++)
    {
        int price, frequency;
        std::cin >> frequency >> price;
        auto magazine = new Magazine(price, frequency);
        magazines.push_back(magazine);
    }

    int grand_total = 0;
    for(int i = 1; i <= M; i++)
    {
        auto result = get_magazines_sent_week(magazines, i);

        int sum = 0;
        for(auto r : result)
        {
            sum += r->price;
        }

        if(result.size() == 2)
        {
            sum *= 0.9;
        }
        else if(result.size() >= 3)
        {
            sum *= 0.85;
        }

        grand_total += sum;
    }

    std::cout << grand_total << std::endl;
}