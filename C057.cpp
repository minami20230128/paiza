#include <iostream>

int main()
{
    int T, x, y;
    int farthest = 0;

    for(int i = 0; i < T; i++)
    {
        int move_x, move_y;
        std::cin >> move_x >> move_y;

        x += move_x;
        y += move_y;

        if(y < 0) break;
        
        farthest = farthest < x ? x : farthest;
    }

    std::cout << farthest << std::endl;


    return 0;
}