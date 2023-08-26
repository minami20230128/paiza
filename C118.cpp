#include <iostream>
#include <stdlib.h>

int main()
{
    int D, N, L;
    int sum = 0;
    std::cin >> D;
    std::cin >> N;
    std::cin >> L;

    int prev_num = 0;
    for(int i = 0; i < N; i++)
    {
        int num;
        std::cin >> num;
        int left = abs(prev_num - num);
        //std::cout << left << std::endl;
        int bigger = prev_num > num ? prev_num : num;
        int smaller = bigger == prev_num ? num : prev_num;
        int right = (D - bigger) + smaller;
        //std::cout << right << std::endl;
        
        int smallest = left > right ? right : left;
        sum += smallest;
        //std::cout << smallest << std::endl;
        prev_num = num;
    }

    
    if(sum > L)
    {
        std::cout << "No" << std::endl;
    }
    else
    {
        std::cout << "Yes" << std::endl;
    }

    return 0;
}

