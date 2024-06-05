#include <iostream>
#include <vector>
#define HORSE_NUM 3

float get_each_ave(std::vector<int> ranks, int first, int K)
{
    int sum = 0;
    for(int i = 0; i < K; i++)
    {
        sum += ranks[first + i];
    }
    
    //std::cout << (float) sum / K << std::endl;

    return (float) sum / K;
}

float get_ave(std::vector<int> ranks, int N, int K)
{
    float sum = 0;
    for(int i = 0; i < N - K + 1; i++)
    {
        sum += get_each_ave(ranks, i, K);
    }

    return (float) sum / 3;
}

int main()
{
    int N, K;
    std::cin >> N >> K;
    std::vector<float> aves;

    for(int i = 1; i < HORSE_NUM + 1; i++)
    {
        std::vector<int> ranks;
        for(int j = 0; j < N; j++)
        {
            int rank;
            std::cin >> rank;
            ranks.push_back(rank);
        }
        aves.push_back(get_ave(ranks, N, K));
    }

    float least = 100000;
    int least_idx = 0;
    for(int i = 0; i < aves.size(); i++)
    {
        //std::cout << aves[i] << std::endl;
        if(aves[i] < least)
        {
            least = aves[i];
            least_idx = i + 1;
        }
    }

    std::cout << least_idx << std::endl;

    return 0;
}