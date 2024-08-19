#include <iostream>

int main()
{
    int car_num, trafic_jam_length;
    std::cin >> car_num >> trafic_jam_length;

    int vehicle_dist_num = car_num - 1;

    int sum = 0;
    for(int i = 0; i < vehicle_dist_num; i++)
    {
        int dist;
        std::cin >> dist;

        if(dist <= trafic_jam_length)
        {
            sum += dist;
        }
    }

    std::cout << sum;

    return 0;
}