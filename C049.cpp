#include <iostream>
#include <stdlib.h>

int main()
{
    int N;
    int sum = 0;
    std::cin >> N;
    int prev = 1;
    for(int i = 0; i < N; i++)
    {
        int move;
        std::cin >> move;
        sum += abs(move - prev);
        prev = move;
    }
    std::cout << sum << std::endl;

    return 0;
}