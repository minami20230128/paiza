#include <iostream>
#include <vector>

int main()
{
    int N, M;
    int groupmembers = 0;
    int groupnum = 0;
    
    std::cin >> N;
    std::cin >> M;
    std::vector<int> capacities(N);
    std::vector<int> actuals(N, 0);
    for(auto&& capacity : capacities)
    {
        std::cin >> capacity;
    }

    int idx = 0;
    while(1)
    {
        if(groupmembers == 0) std::cin >> groupmembers;
        if(groupmembers <= capacities[idx])
        {
            actuals[idx] += groupmembers;
            groupmembers = 0;
            groupnum++;
            //std::cout << actuals[idx] << std::endl;
        }
        else
        {
            actuals[idx] += capacities[idx];
            groupmembers -= capacities[idx]; 
            //std::cout << actuals[idx] << std::endl;
        }
        idx++;
        if(idx == N) idx = 0;
        if(groupnum == M) break;
    }

    for(auto&& actual : actuals)
    {
        std::cout << actual << std::endl;
    }

    return 0;
}