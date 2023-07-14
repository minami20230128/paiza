#include <iostream>
#include <string>
#include <map>
#include <vector>

int main()
{
    int n;

    std::vector<std::pair<std::string, std::string>> users;
    std::map<std::string, std::string> bloodtypes;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::string name, type;
        std::cin >> name;
        std::cin >> type;
        users.push_back(std::make_pair(name, type));
    }

    int m;
    std::cin >> m;
    for(int j = 0; j < m; j++)
    {
        std::string type, result;
        std::cin >> type;
        std::cin >> result;
        bloodtypes[type] = result;
    }

    auto itr = users.begin();
    while(itr != users.end())
    {
        auto bitr = bloodtypes.begin();
        while(bitr != bloodtypes.end())
        {
            if(itr->second == bitr->first)
            {
                std::cout << itr->first << " " << bitr->second << std::endl;
            }
            bitr++;
        }
       
        itr++;
    }

    return 0;
}