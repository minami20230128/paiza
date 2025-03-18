#include <iostream>

int main()
{
    int N; 
    std::cin >> N;

    bool can_drop = true;
    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        int height;
        std::cin >> height;
        sum += height;

        if(sum > 0)
        {
            can_drop = false;
            break;
        }
    }

    if(can_drop)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}