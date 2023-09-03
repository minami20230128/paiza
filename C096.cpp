#include <iostream>
#include <vector>

int main()
{
    int N;
    std::cin >> N;
    int prev_start, prev_end;
    std::cin >> prev_start >> prev_end;
        
    for(int i = 0; i < N; i++)
    {
        int start, end;
        std::cin >> start >> end;
        if(start > prev_end || end < prev_start)
        {
            std::cout << "NG" << std::endl;
            break;
        }
        else
        {
            if(start >= prev_start)
            {
                prev_start = start;
            }
            if(end <= prev_end)
            {
                prev_end = end;
            }
            
            //std::cout << prev_start << std::endl; 
            //std::cout << prev_end << std::endl; 
        }
        
        if(i == N - 1)  std::cout << "OK" << std::endl;
    }

    return 0;
}