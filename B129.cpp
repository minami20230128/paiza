#include <iostream>
#include <vector>
#include <map>

int main()
{
    int n, m, h, w;
    std::cin >> n >> m >> h >> w;
    //std::cout << n << m << h << w << std::endl;
    std::vector<std::vector<int>> field(h, std::vector<int>(w, -1));
    std::map<int, int> harvest;
    
    for(int i = 1; i <= m; i++)
    {
        harvest[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        int row_from, row_to;
        std::cin >> row_from >> row_to;
        int col_from, col_to;
        std::cin >> col_from >> col_to;
        int kind;
        std::cin >> kind;
        
        //std::cout << row_from << row_to << col_from << col_to << std::endl;
        for(int k = row_from - 1; k < row_to; k++)
        {
            for(int j = col_from - 1; j < col_to; j++)
            {
                if(field.at(k).at(j) != -1)
                {
                    harvest[field.at(k).at(j)]++;
                }
                field.at(k).at(j) = kind;
            }
        }
    }
    
    for(int i = 1; i <= m; i++)
    {
        std::cout << harvest[i] << std::endl;
    }

    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            if(field.at(i).at(j) == -1)
            {
                std::cout << ".";
            }
            else
            {
                std::cout << field.at(i).at(j);
            }
        }
        std::cout << std::endl;
    }

    return 0;
}