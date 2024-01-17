#include <iostream>

int main()
{
    int L, u, a, b, v;
    std::cin >> L >> u >> a >> b >> v;

    int tortoise = L * v;
    int rabbit = (L / a - 1) * b + L * u;

    //std::cout << tortoise << std::endl;
    //std::cout << rabbit << std::endl;
    
    if(tortoise < rabbit)
    {
        std::cout << "KAME";
    }
    else if(tortoise > rabbit)
    {
        std::cout << "USAGI";
    }
    else
    {
        std::cout << "DRAW";
    }

    return 0;
}