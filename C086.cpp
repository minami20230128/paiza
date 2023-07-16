#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string S;
    std::cin >> S;

    std::vector<char> consonants = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    auto itr = S.begin();

    while(itr != S.end())
    {
        for(int i = 0; i < consonants.size(); i++)
        {
            if(*itr == consonants[i])
            {
                S.erase(itr);
            }
        }
        itr++;
    }
    
    std::cout << S << std::endl;
    
    return 0;
}