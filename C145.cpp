#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

int main()
{
    int N;
    std::cin >> N;
    std::vector<int> points(N);

    for(auto&& point : points)
    {
        std::cin >> point;
    }

    std::sort(points.begin(), points.end());

    int sum = 0;
    for(int i = 1; i < N - 1; i++)
    {
        std::cout << points[i] << std::endl;
        sum += points[i];
    }
    
    auto ave = (float) sum / (N - 2);
    printf("%.1lf", ave);

    return 0;
}