#include <iostream>
#include <vector>
#include <map>
#include <stdlib.h>

int main()
{
    int N, M;
    std::cin >> N;
    std::cin >> M;
    std::vector<std::vector<int>> route(N, std::vector<int>(M, 0));

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            int price;
            std::cin >> price;
            route.at(i).at(j) = price;
        }
    }

    int X;
    std::cin >> X;
    //std::vector<std::pair<int, int>> transits(X);
    int prev_r = 1;
    int prev_s = 1;

    int sum = 0;
    for(int k = 0; k < X; k++)
    {
        int route_num, station_num;
        std::cin >> route_num;
        std::cin >> station_num;
        
        //std::cout << prev_r << std::endl;
        //std::cout << prev_s << std::endl;
        
        //std::cout << route_num << std::endl;
        //std::cout << station_num << std::endl;

        if(prev_s == 1)
        {
            sum += route.at(route_num - 1).at(station_num - 1);
        }
        else if(station_num == 1)
        {
            sum += route.at(route_num - 1).at(prev_s - 1);
        }
        else if (prev_s == station_num)
        {
            sum += 0;
        }
        else
        {
            sum += abs(route.at(route_num - 1).at(station_num - 1) - route.at(route_num - 1).at(prev_s - 1));
        }
        //transits.push_back(std::make_pair(route_num, station_num));

        prev_s = station_num;
        prev_r = route_num;
        
        //std::cout << sum << std::endl;
    }

    std::cout << sum << std::endl;

    return 0;
}