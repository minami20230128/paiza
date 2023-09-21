#include <iostream>
#include <stdlib.h>

int main()
{
    int H, W, dy, dx;
    std::cin >> H;
    std::cin >> W;
    std::cin >> dy;
    std::cin >> dx;
    std::cout << H * abs(dx) + W * abs(dy) - abs(dx) * abs(dy) << std::endl;
    return 0;
}