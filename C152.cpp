#include <iostream>
#include <chrono>
#include <string>
#include <time.h>

int main()
{
    int N;
    std::cin >> N;

    int sum_min = 0;
    int sum_hour = 0;

    for(int i = 0; i < N; i++)
    {
        std::string start, end;
        std::cin >> start >> end;

        int start_hour = std::stoi(start.substr(0, 2));
        int start_min = std::stoi(start.substr(3, 2));

        int end_hour = std::stoi(end.substr(0, 2));
        int end_min = std::stoi(end.substr(3, 2));
        
        //std::cout << start_hour << start_min << std::endl;
        //std::cout << end_hour << end_min << std::endl;
        

        int minutes = end_min - start_min > 0 ? end_min - start_min : 60 + (end_min - start_min);
        int hours = end_min - start_min > 0 ? end_hour - start_hour : end_hour - start_hour - 1;

        sum_min += minutes;
        sum_hour += hours;
        
        if(sum_min >= 60)
        {
            sum_hour += sum_min /60;
            sum_min %= 60;
        }
    }

    std::cout << sum_hour;
    std::cout << " ";
    std::cout << sum_min;

    return 0;
}