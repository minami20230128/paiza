#include <iostream>
#include <string>
#include <map>

std::string get_winner(std::map<std::string, int> vote)
{
    std::string winner;
    int largest = 0;
    auto itr = vote.begin();

    while(itr != vote.end())
    {
        if(itr->second > largest)
        {
            largest = itr->second;
            winner = itr->first;
        }
        itr++;
    }

    return winner;
}

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

        vote_one[name]++;
        vote_two[name] += vote_number;
    }

    auto winner_one = get_winner(vote_one);
    auto winner_two = get_winner(vote_two);

    std::cout << winner_one << std::endl;
    std::cout << winner_two << std::endl;

    return 0;
}