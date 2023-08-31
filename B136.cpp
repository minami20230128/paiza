#include <iostream>
#include <string>
#include <vector>

int main()
{
    int N, H, W, sy, sx;
    std::string s;

    std::cin >> N;
    std::cin >> H;
    std::cin >> W;
    std::cin >> sy;
    std::cin >> sx;
    std::cin >> s;
    
    std::vector<std::vector<int>> room(H, std::vector<int>(W, 0));

    for(int h = 0; h < H; h++)
    {
        for(int w = 0; w < W; w++)
        {
            int choco;
            std::cin >> choco;
            room.at(h).at(w) = choco;
            //std::cout << choco << std::endl;
        }
    }

    int cur_x = sx - 1;
    int cur_y = sy - 1;
    auto itr = s.begin();
    while(itr != s.end())
    {
        auto order = std::string({*itr});
        //std::cout << order << std::endl;

        if (order == "F")
        {
            cur_y -= 1;
        }
        else if (order == "R")
        {
            cur_x += 1;
        }
        else if (order == "L")
        {
            cur_x -= 1;
        }
        else if (order == "B")
        {
            cur_y += 1;
        }
        
        //std::cout << cur_y << std::endl;
        //std::cout << cur_x << std::endl;
    
        std::cout << room.at(cur_y).at(cur_x) << std::endl;

        itr++;
    }

    return 0;
}