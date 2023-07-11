#include <iostream>
#include <string>
#include <map>

int main(){
    int n;
    std::cin >> n;
    std::map<std::string, int> nums;
    std::map<int, std::string> sortedmap;
    for(int i = 0; i < n; i++)
    {
        std::string str;
        std::cin >> str;
        int num;
        std::cin >> num;

        if(nums[str] != 0)
        {
            nums[str] += num;
        }
        else
        {
            nums[str] = num;
        }
    }

    auto itr = nums.begin();
    while(itr != nums.end())
    {
        sortedmap[itr->second] = itr->first;
        itr++;
    }

    auto sorted_itr = sortedmap.rbegin();
    while(sorted_itr != sortedmap.rend())
    {
        std::cout << sorted_itr->second << " " << sorted_itr->first << std::endl;
        sorted_itr++;
    }
    
    return 0;
}