#include <iostream>

int main()
{
    int N;
    int sum = 0;
    std::cin >> N;

    for(int i = 0; i < N; i++)
    {
        int water;
        std::cin >> water;
        sum += water;
    }

    int answer;
    (float) sum / N > sum / N ? answer = sum / N + 1 : answer = sum / N;
    std::cout << answer << std::endl;

    return 0;
}