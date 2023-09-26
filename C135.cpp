#include <iostream>

int main()
{
    int M, D;
    std::cin >> M >> D;
    int P, N;
    std::cin >> P >> N;
    int set = N / M;
    float rate = 1 - (float) D / 100;
    int result = set * M * P * rate  + (N - set * M) * P;
    std::cout << result << std::endl;

    return 0;
}