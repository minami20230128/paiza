#include <iostream>
#include <vector>

int main()
{
    int N, K;
    std::cin >> N >> K;

    std::vector<int> winning(N);
    std::vector<int> winning_idxs;
    for(auto&& w : winning)
    {
        std::cin >> w;
    }

    for(int i = 0; i < K; i++)
    {
        int voted;
        std::cin >> voted;
        for(auto&& w : winning)
        {
            if(voted == w)
            {
                winning_idxs.push_back(i + 1);
            }
        }
    }
    
    if(winning_idxs.size() == 0)
    {
        std::cout << -1 << std::endl;
    }
    else
    {
        for(auto&& idx : winning_idxs)
        {
            std::cout << idx << std::endl;
        }
    }

    return 0;
}