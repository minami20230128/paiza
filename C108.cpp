#include <iostream>
#include <map>
#include <vector>

int main()
{
    int N;
    std::cin >> N;
    std::map<int, int> times;
    for(int i = 1; i <= N; i++)
    {
        std::cin >> times[i];
    }

    std::vector<std::vector<int>> distance(N, std::vector<int>(N));
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            std::cin >> distance.at(i).at(j);
            //std::cout << distance.at(i).at(j) << std::endl;
        }
    }

    int spots;
    std::cin >> spots;
    int time = 0;
    int prev = 10000;
    for(int i = 0;i < spots; i++)
    {
        int spot;
        std::cin >> spot;
        if(i != 0)
        {
            time += distance.at(prev - 1).at(spot - 1);
        }

        time += times[spot];
        prev = spot;
    }
    
    std::cout << time << std::endl;
    return 0;
}