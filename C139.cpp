#include <iostream>
#include <map>

int main()
{
    int N;
    std::cin >> N;
    std::map<int, bool> is_delivered;
    
     for(int i = 1; i <= N; i++)
    {
        is_delivered[i] = false;
    }
    
    for(int i = 0; i < N; i++)
    {
        int num;
        std::cin >> num;
        if(num <= N)
        {
            is_delivered[num] = true;
        }
    }

    int count = 0;
    auto itr = is_delivered.begin();
    while(itr != is_delivered.end())
    {
        //std::cout << itr->first << std::endl;
        if(!itr->second)
        {
            count++;
        }
        itr++;
    }

    std::cout << count << std::endl;

    return 0;
}