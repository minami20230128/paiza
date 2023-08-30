#include <iostream>
#include <string>

int main()
{
    int N;
    int count = 0;
    std::string G;
    std::cin >> N;
    std::cin >> G;

    for(int i = 0; i < N; i++)
    {
        std::string str;
        std::cin >> str;
        if(str.find(G) != std::string::npos)
        {
            //std::cout << str.find(G) << std::endl;
            std::cout << str << std::endl;
            count++;
        }
    }

    if(count == 0)
    {
        std::cout << "None" << std::endl;
    }
    return 0;
}