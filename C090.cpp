#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<std::string, int> distances = {{"0", 12}, {"1", 3}, {"2", 4}, {"3", 5}, {"4", 6}, {"5", 7}, {"6", 8}, {"7", 9}, {"8", 10}, {"9", 11}, {"-", 0}};
    std::string str;
    std::cin >> str;
    int sum = 0;
    auto itr = str.begin();
    while(itr != str.end())
    {
        auto s = std::string({*itr});
        sum += distances[s] * 2;
        itr++;
    }

    std::cout << sum << std::endl;

    return 0;
}