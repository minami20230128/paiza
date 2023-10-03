#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> arr(3);
    for(auto&& meat : arr)
    {
        std::cin >> meat;
    }

    std::sort(arr.begin(), arr.end());

    std::cout << arr[1] << std::endl;

    return 0;
}