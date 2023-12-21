#include <iostream>

int main()
{
    int N, V;
    std::cin >> N >> V;
    int prev_time, prev_point;
    bool is_over = false;
    
    std::cin >> prev_time >> prev_point;

    for(int i = 0; i < N - 1; i++)
    {
        int time, point;
        std::cin >> time >> point;
 
        auto velocity = (point - prev_point) / (time - prev_time);
        
        //std::cout << velocity << std::endl;
        //std::cout << V << std::endl;

        if(velocity - V > 0)
        {
            is_over = true;
            break;
        }

        prev_point = point;
        prev_time = time;
    }

    if(is_over)
    {
        std::cout << "YES" << std::endl;
    }
    else 
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}