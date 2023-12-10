#include <iostream>
#include <map>

int main()
{
    int N;
    std::cin >> N;
    std::map<int, int> powers;
    for(int i = 1; i <= N; i++)
    {
        std::cin >> powers[i];
    }

    int M;
    std::cin >> M;
    int count = 0;
    for(int i = 0; i < M; i++)
    {
        int right, left;
        std::cin >> right >> left;
        
        //std::cout << right << std::endl;
        //std::cout << left << std::endl;

        if(right == left)
        {
            if(powers[right] < 2)
            {
                continue;
            }
            //std::cout << right << std::endl;
            //std::cout << left << std::endl;
            powers[right] -= 2;
            count++;
            
            continue;
        }

        if(powers[right] > 0 && powers[left] > 0)
        {
            powers[right] -= 1;
            powers[left] -= 1;
            count++;
            continue;
        }

    }

    std::cout << count << std::endl;

    return 0;
}