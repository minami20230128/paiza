#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

int main()
{
    int bus_kind, target;
    std::cin >> bus_kind >> target;

    std::vector<int> times(bus_kind);

    int difference = 100000;
    for(auto&& time : times)
    {
        std::cin >> time;
        difference = abs(time - target) < difference ? abs(time - target) : difference;
    }

    std::sort(times.begin(), times.end());

    for(auto&& time : times)
    {
        if(abs(time - target) == difference)
        {
            std::cout << time << std::endl;
        }
    }

    return 0;
}