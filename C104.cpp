#include <iostream>
#include <string>
#include <map>

std::pair<int, int> find_pair(int hundred, int one)
{
    for(int i = 1; i < 10; i++)
    {
        int answer = hundred * 100 + one;
        answer += 10 * i;
       for(int j = 0; j < 10; j++)
       {
            int left = (i * 10 + j) * j;
            //std::cout << answer << std::endl; 
            //std::cout << left << std::endl;
            if(left == answer)
            {
                return std::make_pair(i, j);
            }
       }
    }
    
    return std::make_pair(10000, 10000);
}

int main()
{
    int hundred;
    int one;
    std::cin >> hundred >> one;

    auto pair = find_pair(hundred, one);

    if(pair.first == 10000)
    {
        std::cout << "No" <<std::endl;
    }
    else
    {
        std::cout << std::to_string(pair.first) << " "  << std::to_string(pair.second) << std::endl;
    }

    return 0;
}
