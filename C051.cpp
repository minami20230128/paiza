#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int>nums(4);

    for (auto&& num : nums)
    {
        std::cin >> num;
    }

    std::sort(nums.begin(), nums.end(), std::greater<int>());

    std::cout << nums[0] * 10 + nums[2] + nums[1] * 10 + nums[3] << std::endl;

    return 0;
}