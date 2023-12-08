#include <iostream>
#include <string>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::string> hands;

    int paper_count = 0;
    int rock_count = 0;
    int scissors_count = 0;


    for(int i = 0;i < n; i++)
    {
        std::string hand;
        std::cin >> hand;
        if(hand == "paper")
        {
            paper_count++;
        }
        else if(hand == "rock")
        {
            rock_count++;
        }
        else if (hand== "scissors")
        {
            scissors_count++;
        }
    }

    if(rock_count != 0 && paper_count != 0 && scissors_count != 0)
    {
        std::cout << "draw" << std::endl;
    }
    else if(rock_count != 0 && paper_count != 0)
    {
        std::cout << "paper" << std::endl;
    }
    else if(paper_count != 0 && scissors_count != 0)
    {
        std::cout << "scissors" << std::endl;
    }
    else if (rock_count != 0 && scissors_count != 0)
    {
        std::cout << "rock" << std::endl;
    }
    else if(rock_count != 0)
    {
        std::cout << "draw" << std::endl;
    }
    else if(paper_count != 0)
    {
        std::cout << "draw" << std::endl;
    }
    else if(scissors_count != 0)
    {
        std::cout << "draw" << std::endl;
    }


    return 0;
}