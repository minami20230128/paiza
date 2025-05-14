#include <iostream>
#include <string>
#include <vector>

int main()
{
    int N;
    std::cin >> N;
    std::vector<int> curries;
    std::vector<int> rices;

    for(int i = 1; i <= N; i++)
    {
        std::string str;
        std::cin >> str;
        if(str == "C")
        {
            curries.push_back(i);
        }
        else
        {
            rices.push_back(i);
        }
    }

    int curry_rice_num = curries.size() > rices.size() ? rices.size() : curries.size();

    std::cout << curry_rice_num << std::endl;
    for(int i = 0; i < curry_rice_num; i++)
    {
        std::cout << curries[i];
        std::cout << " ";
        std::cout << rices[i] << std::endl;;
    }


    return 0;
}