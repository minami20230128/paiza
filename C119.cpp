#include <iostream>
#include <vector>

int main()
{
    int N, M, K;
    int sum = 0;
    std::cin >> N;
    std::cin >> M;
    std::cin >> K;
    std::vector<bool> houses(N, false);

    int count = 0;
    for(int i = 0; i < M; i++)
    {
        int house_num;
        std::cin >> house_num;
        houses[house_num - 1] = true;
    }

    auto itr = houses.begin();
    while(itr != houses.end())
    {
        if(!*itr)
        {
            count = 0;
            sum++;
        }
        if(*itr)
        {
            count++;
        }
        if(count == K)
        {
            break;
        }
        itr++;
    }

    std::cout << sum << std::endl;

    return 0;
}