#include <iostream>
#include <string>

int main()
{
    int N, A, B;
    std::string schedule, A_parts, B_parts;
    std::cin >> N >> A >> B;
    std::cin >> schedule >> A_parts >> B_parts;

    auto itr = schedule.begin();
    auto a_itr = A_parts.begin();
    while(itr != schedule.end())
    {
        if(*a_itr == *itr)
        {
            a_itr++;
            if(a_itr == A_parts.end()) break;
        }
        itr++;
    }
    
    auto b_itr = B_parts.begin();
    itr = schedule.begin();
    while(itr != schedule.end())
    {
        if(*b_itr == *itr)
        {
            b_itr++;
            if(b_itr == B_parts.end()) break;
        }
        itr++;
    }

    std::cout << std::distance(a_itr, A_parts.end());
    std::cout << " ";
    std::cout << std::distance(b_itr, B_parts.end());

    return 0;
}
