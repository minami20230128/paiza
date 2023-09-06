#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N, M;
    std::cin >> N >> M;
    std::vector<int> sushies(M);
    std::vector<int> rights(M);
    for(auto&& sushi : sushies)
    {
        std::cin >> sushi;
    }

    for(auto&& right : rights)
    {
        std::cin >> right;
    }

    std::sort(sushies.begin(), sushies.end());
    std::sort(rights.begin(), rights.end());

    if(sushies == rights)s
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}