#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> figures{"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
    int one, two, three;
    std::cin >> one >> two >> three;
    for(int i = 0; i < one; i++)
    {
        std::cout << figures[i];
        if(i == one - 1) std::cout << std::endl;
    }

    for(int j = one; j < one + two; j++)
    {
        std::cout << figures[j];
        if(j == one + two - 1) std::cout << std::endl;
    }

    for(int k = one + two; k < one + two + three; k++)
    {
        std::cout << figures[k];
    }
    return 0;
}