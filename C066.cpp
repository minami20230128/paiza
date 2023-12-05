#include <iostream>

int main()
{
    int M, N, x;
    std::cin >> M >> N >> x;
    int count = 0;
    int toughness = x;
    for(int i = 0; i < M; i ++)
    {
        int weight;
        std::cin >> weight;
        //std::cout << toughness << std::endl;

        while(N != 0)
        {
            toughness -= weight;
            if(toughness <= 0)
            {
                N -= 1;
                toughness = x;
            }
            else
            {
                count++;
                break;
            }
        }
        
        
        if(N == 0) break;
    }


    std::cout << count << std::endl;
    return 0;
}