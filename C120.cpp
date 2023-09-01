#include <iostream>
#include <string>

int main()
{
    int N;
    std::cin >> N;
    bool IsSame = false;
   
    std::string first, second;
    std::cin >> first;
    std::cin >> second;

    for(int i = 0; i < N; i++)
    {
        second += second.substr(0, 1);
        second = second.substr(1, N);
        if(second == first)
        {
            IsSame = True;
            break;
        }
    }

    if(IsSame)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    
    return 0;
}