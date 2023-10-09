#include <iostream>
#include <string>
#include <map>
#include <vector>

int main()
{
    int N, M;
    std::cin >> N >> M;
    std::vector<std::pair<int, std::string>> actions;
    for(int i = 0; i< M; i++)
    {
        int sec;
        std::cin >> sec;
        std::string str;
        std::cin >> str;
        actions.push_back(std::make_pair(sec, str));
    }

    for(int i = 1; i <= N; i++)
    {
        std::string output;
        auto itr = actions.begin();
        while(itr != actions.end())
        {
            if(i % itr->first == 0)
            {
                if(output != "")
                {
                    output += " ";
                }
                output += itr->second;
            }
            itr++;
        }

        if(output == "")
        {
            output = std::to_string(i);
        }

        std::cout << output << std::endl;
    }

    return 0;
}