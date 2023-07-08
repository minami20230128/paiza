#include <iostream>
#include <string>
#include <map>

int main(){
    int n;
    std::cin >> n;
    std::map<int, std::string> dict;
    
    for(int i = 0; i < n; i++)
    {
        int number;
        std::string str;
        
        std::cin >> str;
        std::cin >> number;
        
        dict[number] = str;
    }
    
    auto itr = dict.begin();
    while(itr != dict.end())
    {
        std::cout << itr->second << std::endl;
        itr++;
    }
    
    return 0;
}