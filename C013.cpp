#include <iostream>
#include <string>

int main()
{
    int n, m;
    int count = 0;
    std::cin >> n;
    std::cin >> m;
    for(int i = 0; i < m; i++)
    {
        int num;
        std::cin >> num;
        auto str = std::to_string(num);
        //std::cout << str << std::endl;
        auto str_n = std::to_string(n);
        //std::cout << str_n << std::endl;
        if(str.find(str_n) == std::string::npos)
        {
            std::cout << num << std::endl;
            count++;
        }
    }

    if(count == 0)
    {
        std::cout << "none" << std::endl;
    }
    
    return 0;
}