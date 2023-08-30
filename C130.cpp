#include <iostream>
#include <string>
#include <vector>

int main()
{
    int N;
    int num = 0;
    int idx = 1;
    std::cin >> N;
    std::vector<int> questions;
    for(int i = 0; i < N; i++)
    {
        std::string first, second;
        std::cin >> first;
        std::cin >> second;
        //std::cout << first << std::endl;
        //std::cout << second << std::endl;
        if(first == "n" || second == "n")
        {
            num++;
            questions.push_back(idx);
        }
        idx++;
    }
    
    std::cout << num << std::endl;
    auto itr = questions.begin();
    while(itr != questions.end())
    {
        std::cout << *itr << std::endl;
        itr++;
    }

    return 0;
}