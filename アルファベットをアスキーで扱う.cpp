#include <iostream>
#include <string>

int main(){
    char x, y, c;
    std::cin >> x;
    std::cin >> y;
    std::cin >> c;
    
    int sub = int(y) - int(x) + 1;
  
    for(int i = 0; i < sub; i++)
    {
        if(c == x + i)
        {
            std::cout << "true" << std::endl;
            return 0;
        }
    }
    
    std::cout << "false" << std::endl;
    
    return 0;
}