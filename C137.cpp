#include <iostream>
#include <string>
#include <map>

int main()
{
    int N;
    std::cin >> N;
    std::map<std::string, int> vote_one;
    std::map<std::string, int> vote_two;
    
    for(int i = 0; i < N; i++)
    {
        std::string name;
        int vote_number;
        std::cin >> name;
        std::cin >> vote_number;

        vote_one[name] += vote_number;
        vote_two[name]++;
    }

    auto itr = vote_one.begin();
    auto itr_two = vote_two.begin();
    int largest = 0;
    int largest_two = 0;
    std::string winner;
    std::string winner_two;

    while(itr != vote_one.end())
    {
        if(itr->second > largest)
        {
            largest = itr->second;
            winner = itr->first;
        }
        
        if(itr_two->second > largest_two)
        {
            largest_two = itr_two->second;
            winner_two = itr_two->first;
        }
        
        itr++;
        itr_two++;
    }

    std::cout << winner_two << std::endl;
    std::cout << winner << std::endl;

    return 0;
}