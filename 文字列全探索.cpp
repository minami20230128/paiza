#include <iostream>
#include <string>

int main(){
    std::string sub, str;
    std::cin >> sub;
    std::cin >> str;
    
    int idx = 0;
    int cnt = 0;
    
    while(idx != std::string::npos)
    {
        idx = str.find(sub, idx);
        if(idx != std::string::npos)
        {
            cnt++;
            idx++;
        }
    }
    
    std::cout << cnt << std::endl;
    
    return 0;
}