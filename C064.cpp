#include <iostream>
#include <vector>

int main()
{
    int M , N;
    std::cin >> M >> N;
    std::vector<int> calories(M);

    for(auto&& calory : calories)
    {
        std::cin >> calory;
    }

    for(int j = 0; j < N; j++)
    {
        int sum = 0;
        for(auto&& calory : calories)
        {
            int volume;
            std::cin >> volume;
            sum += calory * volume / 100;
        }

        std::cout << sum << std::endl;
    }

    return 0;
}