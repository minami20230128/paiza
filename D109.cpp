#include <iostream>
#include <vector>

int main()
{
    int m, d;
    std::cin >> m;
    std::cin >> d;
    std::vector<int> nums;

    if(m >= 10)
    {
        nums.push_back(m / 10);
    }
    nums.push_back(m % 10);

    if(d >= 10)
    {
        nums.push_back(d / 10);
    }
    nums.push_back(d % 10);

    auto itr = nums.begin();
    while(itr != nums.end())
    {
        if(*itr != nums[0])
        {
            std::cout << "No" << std::endl;
            break;
        }
        itr++;

        if(itr == nums.end())
        {
            std::cout << "Yes" << std::endl;
        }
    }

    return 0;
}