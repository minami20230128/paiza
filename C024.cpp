#include <iostream>
#include <map>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    std::map<int, int> computers = {{1, 0}, {2, 0}};
    for(int i = 0; i < n; i++)
    {
        std::string order;
        std::cin >> order;

        if(order == "SET")
        {
            int idx, a;
            std::cin >> idx;
            std::cin >> a;

            computers[idx] = a;
        }
        else if(order == "ADD")
        {
            int a;
            std::cin >> a;
            computers[2] = computers[1] + a;
        }
        else if (order == "SUB")
        {
            int a;
            std::cin >> a;
            computers[2] = computers[1] - a;
        }
    }

    std::cout << std::to_string(computers[1]) << " " << std::to_string(computers[2]) << std::endl;

    return 0;
}