#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    std::vector<std::vector<int>> stones;
    std::vector<std::vector<int>> tobe;
    int N;
    std::cin >> N;
    int center = (N + 1) / 2;
    for(int i = 0; i < N; i++)
    {
        std::vector<int> tmp;
        for(int j = 0; j < N; j++)
        {
            int i_dist = abs((N + 1) / 2 - 1 - i);
            int j_dist = abs((N + 1) / 2 - 1 - j);
            int minus = i_dist > j_dist ? i_dist : j_dist;
            tmp.push_back((N + 1) / 2 - minus);
        }
        tobe.push_back(tmp);
    }

    //for(int i = 0; i < N; i++)
    //{
    //    for(int j = 0; j < N; j++)
    //    {
    //        std::cout << tobe[i][j] << std::endl;
    //    }
    //}
    
    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            int stone;
            std::cin >> stone;
            sum += abs(stone - tobe.at(i).at(j));
        }
    }

    std::cout << sum;

    return 0;
}