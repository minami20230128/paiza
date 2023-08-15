#include <iostream>
#include <string>
#include <vector>
#include <math.h>

int main()
{
    int xc, yc, r_1, r_2, n;
    std::cin >> xc;
    std::cin >> yc;
    std::cin >> r_1;
    std::cin >> r_2;
    std::cin >> n;
    std::vector<std::string> results(n);
    for(auto&& result : results)
    {
        int x, y;
        std::cin >> x;
        std::cin >> y;
        if(pow(r_1, 2) <= pow((x - xc), 2) + pow((y - yc), 2) && pow((x - xc), 2) + pow((y - yc), 2) <= pow(r_2, 2))
        {
            result = "yes";
        }
        else
        {
            result = "no";
        }
    }
    
    auto itr = results.begin();
    while(itr != results.end())
    {
        std::cout << *itr << std::endl;
        itr++;
    }

    return 0;
}