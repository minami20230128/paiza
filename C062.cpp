#include <iostream>
#include <string>

int main()
{
    int T;
    int melons = 0;
    int count = 0;
    bool is_eating = false;
    std::cin >> T;
    for(int i = 0; i < T; i++)
    {
        std::string neta;
        std::cin >> neta;
        //std::cout << neta << std::endl;
        
        if(is_eating)
        {
            count++;
            if(count == 10)
            {
                is_eating = false;
                count = 0;
            }
            continue;
        }

        if(neta == "melon")
        {
            melons++;
            is_eating = true;
        }
    }

    std::cout << melons << std::endl;

    return 0;
}