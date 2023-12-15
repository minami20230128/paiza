#include <iostream>
#include <vector>

int main()
{
    int N, X;
    std::cin >> N >> X;
    std::vector<int> numbers;

    for(int i = 0;i < N; i++)
    {
        int num;
        std::cin >> num;
        numbers.push_back(num);
        //std::cout << num << std::endl;
    }

    std::string str;
    while(X != 0)
    {
        int per = X % 2;
        str += std::to_string(per);
        X = X / 2;
    }
    
    for(auto&& num : numbers)
    {
        std::cout << str[num - 1] << std::endl;
    }

    //std::cout << str << std::endl;


    return 0;
}