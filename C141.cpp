#include <iostream>
#include <map>

int main()
{
    std::map<std::string, int> result;
    int N;
    std::cin >> N;

    for(int i = 0; i < N; i++)
    {
        std::string name;
        std::cin >> name;
        result[name] += 1;
    }

    int biggest = 0;
    std::string winner;
    auto itr = result.begin();
    while(itr != result.end())
    {
        if(itr->second > biggest)
        {
            biggest = itr->second;
            winner = itr->first;
        }
        itr++;
    }

    std::cout << winner << std::endl;

    return 0;
}