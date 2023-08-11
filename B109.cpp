#include <iostream>
#include <vector>
#include <stdlib.h>

int main()
{
    int N, H, W, P, Q;
    int min = 10000;
    std::cin >> N;
    std::cin >> H;
    std::cin >> W;
    std::cin >> P;
    std::cin >> Q;
    std::vector<std::vector<bool>> theater(H, std::vector<bool>(W, true));;

    for(int i = 0; i < N; i++)
    {
        int p, q;
        std::cin >> p;
        std::cin >> q;
        theater.at(p).at(q) = false;
        //std::cout << p << std::endl;
        //std::cout << q << std::endl;
    }

    for(int j = 0; j < H; j++)
    {
        for(int k = 0; k < W; k++)
        {
            //std::cout << j << std::endl;
            //std::cout << k << std::endl;
            if(!theater.at(j).at(k))
            {
                break;
            }
            min = (min > abs(P - j) + abs(Q - k)) ? (abs(P - j) + abs(Q - k)) : min;
        }
    }
    
    //std::cout << min << std::endl;
    
    //for(int j = 0; j < H; j++)
    //{
    //    for(int k = 0; k < W; k++)
    //    {
    //        if(!theater.at(j).at(k))
    //        {
    //            std::cout << "false" << std::endl;
    //        }
    //        else
    //        {
    //            std::cout << "true" << std::endl;
    //        }
    //    }
    //}

    for(int j = 0; j < H; j++)
    {
        for(int k = 0; k < W; k++)
        {
            if(!theater.at(j).at(k))
            {
                break;
            }
             if(abs(P - j) + abs(Q - k) == min)
             {
                std::cout << std::to_string(j) << " " << std::to_string(k) << std::endl;
             }
        }
    }

    return 0;
}