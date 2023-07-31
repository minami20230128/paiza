#include <iostream>

int main()
{
    int N, M, A, B, C, cups;
    std::cin >> N;
    std::cin >> M;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    int count = 0;
    for(int i = 0; i < N; i++)
    {
        std::cin >> cups;
        int sales = C * cups - B * M - A;
        if(sales < 0) count++;
    }
    std::cout << count << std::endl;

    return 0;
}