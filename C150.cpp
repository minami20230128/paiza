#include <iostream>
#include <stdlib.h>

int main()
{
    int N, D;
    std::cin >> N >> D; 
    int p_x, p_y;
    std::cin >> p_x >> p_y;
    
    int cnt = 0;

    for(int i = 0; i < N; i++)
    {
        int x, y;
        std::cin >> x >> y;

        int dist = abs(p_x - x) + abs(p_y - y);
        //std::cout << dist << std::endl;
        
        if(dist <= D)
        {
            cnt++;
        }
    }
    
    std::cout << cnt << std::endl;

    return 0;
}