#include <iostream>
#include <map>
#include <vector>

int main()
{
    int N;
    std::cin >> N;
    std::vector<std::pair<int, int>> people;
    for(int i = 0; i < N; i++)
    {
        int age;
        std::cin >> age;
        people.push_back(std::pair(age, 0));
    }
    
    int orders;
    std::cin >> orders;
    for(int i = 0; i < orders; i++)
    {
        int from, to;
        std::cin >> from >> to;
        //std::cout << from << std::endl;
        //std::cout << to << std::endl;
        int beans;
        //std::cout << beans << std::endl;
        std::cin >> beans;
        auto itr = people.begin() + from - 1;
        auto end_itr = people.begin() + to;
        while(itr != end_itr)
        {
            if(itr->second + beans <= itr->first)
            {
                itr->second += beans;
            }
            else
            {
                itr->second = itr->first;
            }
            
            itr++;
        }
    }

    auto itr = people.begin();
    while(itr != people.end())
    {
        std::cout << itr->second << std::endl;
        
        itr++;
    }

    return 0;
}