#include <iostream>

int main()
{
    int H, W;
    std::cin >> H >> W;
    for(int i =0 ; i < H; i++)
    {
        for(int j = 0; j < W; j++)
        {
            int color;
            std::cin >> color;
            if(color >= 128)
            {
                std::cout << 1;
            }
            else
            {
                std::cout << 0;
            }
            
            if(j < W - 1) std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}