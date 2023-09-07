#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N;
    std::cin >> N;
    std::vector<int> cars(N);

    for(auto&& car : cars)
    {
        std::cin >> car;
    }
    
    auto last = std::max_element(cars.begin(), cars.end());
    
    int idx = 1;
    int cnt = 0;
    auto itr = cars.begin();
    while(idx != N)
    {
        if(*itr == *last)
        {
            cnt++;
        }
        if(*itr != idx)
        {
            itr++;
        }
        else if(*itr == idx)
        {
            idx++;
            itr++;
        }
        if(itr == cars.end())
        {
            itr = cars.begin();
        }
        
        //std::cout << last << std::endl;
    }

    std::cout << cnt << std::endl;
    return 0;
}