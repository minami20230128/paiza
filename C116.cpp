#include <iostream>
#include <string>

int main()
{
    int N, M;
    std::cin >> N >> M;
    int loser = 0;
    for(int i = 0; i < N; i++)
    {
        
        int stick;
        std::cin >> stick;
        if(stick == 0)
        {
            loser++;
            
            if(loser >= M)
            {
                break;
            }
        }

        if(stick == 1)
        {
            loser = 0;
        }
    }

    if(loser >= M)
    {
        std::cout << "NG" << std::endl;
    }
    else
    {
        std::cout << "OK" << std::endl;
    }
    
    return 0;
}