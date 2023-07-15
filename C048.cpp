#include <iostream>

int main()
{
    int X, P;
    int sum = 0;
    std::cin >> X;
    std::cin >> P;
    float percentage = (float) P/100;

    while(X != 0)
    {
        sum += X;
        X *= (1 - percentage);
    }

    std::cout << sum << std::endl;

    return 0;
}