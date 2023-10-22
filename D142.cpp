#include <iostream>

int main()
{
    int N, X, Y;
    std::cin >> N >> X >> Y;
    std::cout << ((N - 1) / X + 1) * Y << std::endl; 
    return 0;
}