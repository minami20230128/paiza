#include <iostream>
#include <stdio.h>

int main()
{
    int points = 0;
    for(int i = 0; i < 7; i++)
    {
        int point;
        std::cin >> point;
        points += point;
    }

    float avg = (float)points / 7;

    printf("%.1lf", avg);

    return 0;
}