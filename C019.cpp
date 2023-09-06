#include <iostream>
#include <stdlib.h>
#include <vector>

int main()
{
    int Q;
    std::cin >> Q;
    for(int i =0; i < Q; i++)
    {
        int N;
        std::cin >> N;
        std::vector<int> numbers;
        for(int j =0; j<N; j++)
        {
            if(N % j == 0)
            {
                numbers.push_back(j);
            }
        }

        int sum = 0;
        auto itr = numbers.begin();
        while(itr != numbers.end())
        {
            sum += *itr;
            itr++;
        }

        if(sum == N)
        {
            std::cout << "perfect" << std::endl;
        }
        else if(sum - N == abs(1))
        {
            std::cout << "nearly" << std::endl;
        }
        else
        {
            std::cout << "neither" << std::endl;
        }
    }
    return 0;
}