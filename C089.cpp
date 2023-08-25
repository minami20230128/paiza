#include <iostream>
#include <string>
#include <vector>

int main()
{
    int H, W;
    int sum = 0;
    std::cin >> H;
    std::cin >> W;
    std::vector<std::string> strs(H);

    for(auto&& str : strs)
    {
        std::cin >> str;
    }

    for(auto&& str : strs)
    {
        auto c = str.begin();
        while(c != str.end())
        {
            int point;
            std::cin >> point;
            if(std::string({*c}) == "o")
            {
                sum += point;
            }
            c++;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}