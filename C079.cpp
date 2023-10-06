#include <iostream>
#include <vector>

int main()
{
    int N, M;
    int result;
    std::cin >> N >> M;
    std::vector<int> numbers;
    for(int i = 1; i <= M; i++)
    {
        numbers.push_back(i);
    }

    for(int i = 0; i < N; i++)
    {
        int num;
        std::cin >> num;
        if(std::find(numbers.begin(), numbers.end(), num) != numbers.end())
        {
            auto result = std::remove(numbers.begin(), numbers.end(), num);
            numbers.erase(result, numbers.end());
            if(numbers.size() == 0)
            {
                //std::cout << num << std::endl;
                std::cout << i + 1 << std::endl;
            }
        }
    }

    for(int i = 0; i < M; i++)
    {
        //std::cout << numbers[i] << std::endl;
    }
    
    if(numbers.size() != 0)
    {
        std::cout << "unlucky" << std::endl;
    }

    return 0;
}