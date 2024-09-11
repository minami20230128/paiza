#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N, L;
    std::cin >> N >> L;
    std::vector<int> targets;
    std::vector<int> all;

    for(int i = 0; i < N; i++)
    {
        int price;
        std::cin >> price;
        if(price >= L)
        {
            targets.push_back(price);
        }
        all.push_back(price);
    }

    int sum = 0;
    if(targets.size() != 0)
    {
        std::sort(targets.begin(), targets.end());
        int target = *(targets.end() - 1);
        //std::cout << target;
        
        auto target_itr = std::find(all.begin(), all.end(), target);
        all.erase(target_itr);
        sum += target / 2;
    }

    for(auto&& price : all)
    {
        sum += price;
    }
    
    std::cout << sum;

    return 0;
}