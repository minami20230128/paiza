#include <iostream>

int main()
{
    int T, x, y;
    std::cin >> T >> x >> y;
    int farthest = x;

    for(int i = 0; i < T; i++)
    {
        int move_x, move_y;
        std::cin >> move_x >> move_y;

        x += move_x;
        y += move_y;
        
        //std::cout << x << std::endl;
        //std::cout << y << std::endl;
        
        farthest = farthest < x ? x : farthest;

        if(y <= 0) break;
    }

    std::cout << farthest << std::endl;


    return 0;
}