#include <iostream>
#include <string>

int main(void){
    std::string x, y, c;
    std::cin >> x;
    std::cin >> y;
    std::cin >> c;
    
    auto from_ascii = int(x);
    auto to_ascii = int(y);
    
    for(int i = from_ascii; i < to_ascii; i++)
    {
        char c = i;
        if(std::string(i) == c)
        {
            std::cout << "true" << std::endl;
        }
    }
    
    std::cout << "false" << std::endl;
    
    return 0;
}