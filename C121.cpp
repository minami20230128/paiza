#include <iostream>
#include <vector>

int main()
{
    int N, C;
    std::cin >> N >> C;
    std::vector<int> ranks = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int count = 0;
    for(int i = 0; i < N; i++)
    {
        int rank, carory;
        std::cin >> rank >> carory;
        C -= carory;
        if(C < 0)
        {
            break;
        }
        
        if(std::find(ranks.begin(), ranks.end(), rank) != ranks.end())
        {
            std::erase(ranks, rank);
            count++;
        }
        
    }

    if(ranks.size() == 0)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << count << std::endl;
    }

    return 0;
}