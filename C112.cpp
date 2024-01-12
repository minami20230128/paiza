#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    int shortest = 100;
    int largest = 0;
    for(int i = 0; i < N; i++)
    {
        int departure, flight, arrive;
        std::cin >> departure >> flight >> arrive;
        int day_time = (24 - arrive) + departure + flight;
        //std::cout << day_time << std::endl;

        shortest = shortest > day_time ? day_time : shortest;
        largest = day_time > largest ? day_time : largest;

    }

    std::cout << shortest << std::endl;
    std::cout << largest << std::endl;

    return 0;
}