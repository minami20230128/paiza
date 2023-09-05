#include <iostream>
#include <math.h>

int main()
{
    int a, b, R;
    std::cin >> a >> b >> R;
    int N;
    std::cin >> N;
    for(int i = 0; i < N; i++)
    {
        int x, y;
        std::cin >> x >> y;
        if(pow(x - a, 2) + pow(y - b, 2) >= pow(R, 2))
        {
            std::cout << "silent" << std::endl;
        }
        else
        {
            std::cout << "noisy" << std::endl;
        }
    }
    return 0;
}