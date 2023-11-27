#include <iostream>
#include <string>

int main()
{
    int W, N;
    std::cin >> W >> N;
    for(int i = 0; i < N; i++)
    {
        std::string str;
        std::cin >> str;
        std::cout << str << std::endl;
    }
    
    return 0;
}