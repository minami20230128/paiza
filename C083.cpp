#include <iostream>
#include <vector>
#include <string>

int main()
{
    int N, R;
    std::cin >> N >> R;
    int best = 0;

    std::vector<int> result;
    for(int i = 0; i < N; i++)
    {
        int sales;
        std::cin >> sales;
        int length = sales / R;
        best = length > best ? length : best;
        result.push_back(length);
    }
    
    int idx = 1;
    for(auto&& r : result)
    {
        std::string str;
        for(int j =0; j < r; j++)
        {
            str += "*";
        }

        for(int k = 0; k < best - r; k++)
        {
            str += ".";
        }

        std::cout << std::to_string(idx) << ":" << str << std::endl;
        idx++;
    }

    return 0;
}