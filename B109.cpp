#include <iostream>
#include <vector>
#include <stdlib.h>

int main()
{
    int N, H, W, P, Q;
    int min = 1000000000;
    std::cin >> N;
    std::cin >> H;
    std::cin >> W;
    std::cin >> P;
    std::cin >> Q;
    std::vector<std::vector<bool>> theater(H, std::vector<bool>(W, true));//1

    for(int i = 0; i < N; i++)//2
    {
        int p, q;
        std::cin >> p;
        std::cin >> q;
        theater.at(p).at(q) = false;
        //std::cout << p << std::endl;
        //std::cout << q << std::endl;
    }

    for(int j = 0; j < H; j++)//3
    {
        for(int k = 0; k < W; k++)
        {
            //std::cout << j << std::endl;
            //std::cout << k << std::endl;
            if(!theater.at(j).at(k))
            {
                continue;
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

    for(int j = 0; j < H; j++)//4
    {
        for(int k = 0; k < W; k++)
        {
            if(!theater.at(j).at(k))
            {
                continue;
            }
             if(abs(P - j) + abs(Q - k) == min)
             {
                std::cout << std::to_string(j) << " " << std::to_string(k) << std::endl;
             }
        }
    }

    return 0;
}

//・入力例のとき
//1.予約状況を表すboolの二次元配列を用意しTrueで初期化
//H（縦）=4、W（横）=5
//[TTTTT]
//[TTTTT]
//[TTTTT]
//[TTTTT]
//
//2.1の配列のうち、予約されている席をFalseに反転する
//TTTTT
//FTFFF
//TTFFF
//TTTFF
//
//3.予約されていない席の中でマンハッタン距離の最小値を求める
//
//4.３で求めた最小値とマンハッタン距離が同じになる席を見つけたら表示