#include <iostream>
#include <vector>

std::vector<int> exchange(int idx1, int idx2, std::vector<int> nums)
{
    int tmp = nums[idx1 - 1];
    nums[idx1 - 1] = nums[idx2 - 1];
    nums[idx2 - 1] = tmp;

    return nums;
}

int main()
{
    int N;
    std::cin >> N;
    std::vector<int> nums(N);
    for(auto&& num : nums)
    {
        std::cin >> num;
    }

    int Q;
    std::cin >> Q;

    for(int i = 0; i < Q; i++)
    {
        int idx1, idx2;
        std::cin >> idx1 >> idx2;
        nums = exchange(idx1, idx2, nums);
    }

    bool is_asc = true;
    int prev = 0;
    for(auto&& num : nums)
    {
        if(prev > num)
        {
            is_asc = false;
            break;
        }
        prev = num;
        //std::cout << num;
    }
    
    if(is_asc)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}