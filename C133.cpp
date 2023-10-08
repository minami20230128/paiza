#include <iostream>
#include <vector>

int main()
{
    int H, W;
    std::cin >> H >> W;
    std::vector<std::vector<int>> region_sums(H, std::vector<int>(W, 0));
    int groups_by_width = W / 3;
    int groups_by_height = H / 3;
   
    const int point_num = 9;

    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < W; j++)
        {
            int point;
            std::cin >> point;
            region_sums.at(i / 3).at(j / 3) += point; 
        }
    }

    for(int i = 0; i < groups_by_height; i++)
    {
        for(int j = 0; j < groups_by_width; j++)
        {
            std::cout << region_sums.at(i).at(j) / point_num;
            if(j != groups_by_width - 1)
            {
                std::cout << " ";
            }
        }
        
        std::cout << std::endl;
    }


    return 0;
}