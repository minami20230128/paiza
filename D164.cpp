#include <iostream>
#include <math.h>

int main()
{
    int N;
    std::cin >> N;
    bool is_multiplier = false;
    for(int i = 0; i <= 8; i++)
    {
        int l = pow(2, i);
        if(l == N)
        {
            is_multiplier = true;
        }
    }

    if(is_multiplier)
    {
        std::cout << "OK" << std::endl;
    }
    else
    {
        std::cout << "NG" << std::endl;
    }

    return 0;
}