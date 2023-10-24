#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
    int N;
    std::cin >> N;
    int cnt = 0;
    for(int i = 0; i < 365; i++)
    {
        auto str = std::to_string(i);
        auto n_str = std::to_string(N);
        
        if(str.find(n_str) != std::string::npos)
        {
            cnt++;
        }
    }
    std::cout << cnt << std::endl;

    return 0;
}