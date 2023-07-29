#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N;
    std::cin >> N;
    std::vector<int> inclinations(5), points(5), sums(N);

    for(auto&& inclination : inclinations)
    {
        std::cin >> inclination;
    }

    for(auto&& sum : sums)
    {
        std::vector<int> points(5);
        for(auto&& point : points)
        {
            std::cin >> point;
        }
        
        for(int i = 0; i < inclinations.size(); i++)
        {
            sum += inclinations[i] * points[i];
        }
    }

    std::sort(sums.rbegin(), sums.rend());
    std::cout << sums[0] << std::endl;

    return 0;
}