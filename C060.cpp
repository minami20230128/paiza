#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    int N, K, P;
    std::cin >> N >> K >> P;
    std::vector<std::string> dictionery;

    for(int i = 0; i < N; i++)
    {
        std::string word;
        std::cin >> word;
        dictionery.push_back(word);
    }

    std::sort(dictionery.begin(), dictionery.end());

    int idx = 0;
    auto itr = dictionery.begin();
    while(itr != dictionery.end())
    {
        if(idx / K + 1 == P)
        {
            std::cout << *itr << std::endl;
        }
        
        itr++;
        idx++;
    }

    return 0;
}