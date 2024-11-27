#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    int N; 
    std::cin >> N;
    std::vector<std::string> flowers(N);

    for(auto&& flower : flowers)
    {
        std::cin >> flower;
    }

    std::sort(flowers.begin(), flowers.end());

    int kind = 0;
    std::string prev = "";
    for(auto&& flower : flowers)
    {
        if(prev != flower)
        {
            kind++;
        }
        prev = flower;
    }

    std::cout << kind << std::endl;
}