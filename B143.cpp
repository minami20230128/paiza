#include <iostream>
#include <map>
#include <vector>

int main()
{
    int N, M;
    std::cin >> N >> M;
    std::map<int, int> num_len;

    for(int i = 1; i <= N; i++)
    {
        num_len[i] = 1;
    }

    for(int i = 0; i < M; i++)
    {
        int winner, loser;
        std::cin >> winner >> loser;
        //std::cout << winner << loser;
        num_len[winner] += num_len[loser];
        num_len[loser] = 0;
        //std::cout << num_len[winner] << num_len[loser];
    }

    int best_score = 0;
    std::vector<int> winner;
    auto itr = num_len.begin();
    while(itr != num_len.end())
    {
        //std::cout << itr->first << std::endl;
        //std::cout << itr->second << std::endl;
        
        if(itr->second == best_score)
        {
            winner.push_back(itr->first);
        }
        
        
        if(itr->second > best_score)
        {
            best_score = itr->second;
            winner.clear();
            winner.push_back(itr->first);
        }
        
        itr++;
    }
    
    for(int i = 0; i < winner.size(); i++)
    {
        std::cout << winner[i] << std::endl;
    }

    return 0;
}