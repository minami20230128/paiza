#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
    int N;
    std::cin >> N;
    float lower_than = 200;
    float higher_than = 0;
    for(int i = 0; i < N; i++)
    {
        std::string relation;
        std::cin >> relation;
        float height;
        std::cin >> height;

        if(relation == "le" && lower_than > height)
        {
            lower_than = height;
        }
        else if(relation == "ge" && higher_than < height)
        {
            higher_than = height;
        }
    }

    printf("%.1lf", higher_than);
    std::cout << " ";
    printf("%.1lf", lower_than);
    
    return 0;
}