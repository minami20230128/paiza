#include <iostream>
#include <vector>
#include <algorithm>

int same_numbers(std::vector<int>nums, std::vector<int>boughts)
{
    int num = 0;
    for(int i = 0; i <6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(nums[i] == boughts[j])
            {
                num++;
            }
        }
    }

    return num;
}

int main()
{
    std::vector<int> nums(6);
    for(auto&& num : nums)
    {
        std::cin >> num;
    }

    std::sort(nums.begin(), nums.end());

    int N; 
    std::cin >> N;
    for(int i = 0; i < N; i++)
    {
        std::vector<int> boughts(6);
        for(auto&& bought : boughts)
        {
            std::cin >> bought;
        }

        std::sort(boughts.begin(), boughts.end());

        std::cout << same_numbers(nums, boughts) << std::endl;
    }

    return 0;
}