#include <iostream>
#include <string>

int main()
{
    int N;
    std::cin >> N;
    int count_g = 0;
    int count_p = 0;
    for(int i = 0;i < N; i++)
    {
        std::string s;
        std::cin >> s;
        if(s == "G")
        {
            count_g++;
        }
        else if(s == "P")
        {
            count_p++;
        }
    }

    if(count_g > count_p)
    {
        std::cout << "P" << std::endl;
    }
    else if(count_g == count_p)
    {
        std::cout << "Draw" << std::endl;
    }
    else
    {
        std::cout << "G" << std::endl;
    }
    
    return 0;
}