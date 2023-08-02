#include <iostream>
#include <map>
#include <string>

int main()
{
    int N;
    std::map<int, std::string> usernames;
    std::cin >> N;
    for(int i = 0; i < N; i++)
    {
        int idx = 0;
        std::string name;
        std::cin >> name;
        auto itr = name.begin();
        while(itr != name.end())
        {
            if(std::string({*itr}) >= "0" && std::string({*itr}) <= "9") break;
            itr++;
            idx++;
        }
        usernames[atoi(name.substr(idx).c_str())] = name;
    }

    auto uitr = usernames.begin();
    while(uitr != usernames.end())
    {
        std::cout << uitr->second << std::endl;
        uitr++;
    }

    return 0;
}

