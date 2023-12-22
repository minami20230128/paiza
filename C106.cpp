#include <iostream>
#include <vector>
#include <algorithm>

int count_higher_ranker(int point, std::vector<int> arr)
{
    int count = 0;
    auto itr = arr.begin();
    while(itr != arr.end())
    {
        if(*itr > point) count++;
        itr++;
    }
    return count;
}

int main()
{
    int N;
    std::cin >> N;
    std::vector<int> points;
    for(int i =0;i < N; i++)
    {
        int point;
        std::cin >> point;
        points.push_back(point);
    }

    auto itr = points.begin();
    while(itr != points.end())
    {
        auto higher = count_higher_ranker(*itr, points);
        switch(higher)
        {
            case 0:
                std::cout << "G" << std::endl;
                break;
            case 1:
                std::cout << "S" << std::endl;
                break;
            case 2:
                std::cout << "B" << std::endl;
                break;
            default:
                std::cout << "N" << std::endl;
                break;
        }
        itr++;
    }

    return 0;
}