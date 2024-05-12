#include <iostream>
#include <vector>
#include <map>
#define NOT_FOUND -1

std::pair<int, int> find_coordinates(std::vector<std::vector<int>> bingo, int num, int N)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(bingo.at(i).at(j) == num)
            {
                return std::make_pair(i, j);
            }
        }
    }
    
    return std::make_pair(NOT_FOUND, NOT_FOUND);
}

int main()
{
    int N, K;
    std::cin >> N >> K;
    std::vector<std::vector<int>> bingo(N, std::vector<int>(N));

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            std::cin >> bingo.at(i).at(j);
        }
    }

    for(int i = 0; i < K; i++)
    {
        int num;
        std::cin >> num;

        auto pair = find_coordinates(bingo, num, N);
        //std::cout << pair.first << std::endl;
        //std::cout << pair.second << std::endl;
        
        if(pair.first != NOT_FOUND)
        {
            bingo.at(pair.first).at(pair.second) = 0;
        }
       
    }
    
    //横
    int bingo_num = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(bingo.at(i).at(j) != 0) break;
            if(j == N - 1) bingo_num++;
        }
    }
    
    //縦
    for(int j = 0; j < N; j++)
    {
        for(int i = 0; i < N; i++)
        {
            if(bingo.at(i).at(j) != 0) break;
            if(i == N - 1) bingo_num++;
        }
    }
    
    //斜め
    for(int i = 0; i < N; i++)
    {
        if(bingo.at(i).at(i) != 0) break;
        if(i == N - 1) bingo_num++;
    }
    
    for(int i = 0; i < N; i++)
    {
        if(bingo.at(i).at((N - 1) - i) != 0) break;
        if(i == N - 1) bingo_num++;
    }

    std::cout << bingo_num;

    return 0;
}