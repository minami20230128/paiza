#include <iostream>

int main()
{
    int N, D;
    std::cin >> N;
    std::cin >> D;
    int sum = D;
    for(int i = 0; i < N - 1; i++)
    {
        int len;
        std::cin >> len;
        sum += D - len;
        //std::cout << len << std::endl;
    }

    std::cout << sum * D << std::endl;
    return 0;
}