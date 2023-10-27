#include <iostream>
#include <string>

int main()
{
    std::string S;
    std::cin >> S;
    auto itr = S.begin();
    std::string spare = "";
    for(int i = 0; i < S.size(); i++)
    {
        spare += *itr;
    }

    if(S == spare)
    {
        std::cout << "NG" << std::endl;
    }
    else
    {
        std::cout << "OK" << std::endl;
    }
    
    return 0;
}