#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>

int main()
{
    int N;
    std::cin >> N;
    bool has_zero = false;
    bool has_ten = false;
    std::vector<int> numbers;
    for(int i = 0; i < N; i++)
    {
        std::string card;
        std::cin >> card;
        
        if(card == "x10")
        {
            has_ten = true;
            continue;;
        }
        
        if(card == "0")
        {
            has_zero = true;
            continue;
        }

        numbers.push_back(stoi(card));
    }

    std::sort(numbers.begin(), numbers.end());

    if(has_zero)
    {
        numbers.pop_back();
    }
    
    int sum = accumulate(numbers.begin(), numbers.end(), 0);

    if(has_ten) sum *= 10;

    std::cout << sum << std::endl;

    return 0;
}