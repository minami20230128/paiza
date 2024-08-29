#include <iostream>
#include <vector>

int main()
{
    int D;
    std::cin >> D;
    int prev = -1;
    std::vector<int> rainbow_days;
    for(int i = 0; i < D; i++)
    {
        int today;
        std::cin >> today;

        if(today == 0 && prev == 2)
        {
            rainbow_days.push_back(i);
        }
        
        prev = today;
    }
    
    if(rainbow_days.size() == 0) std::cout << -1;
    
    for(int i = 0; i < rainbow_days.size(); i++)
    {
        std::cout << rainbow_days[i];
        if(i != rainbow_days.size() - 1) std::cout << " ";
    }

    return 0;
}