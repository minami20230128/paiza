#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string str = "Hello ";
    int num;
    std::cin >> num;
    
    for(int i = 0; i < num; i++)
    {
        std::string word;
        std::cin >> word;
        
        if(i == num - 1)
        {
            str += word + ".";
            break;
        }
        
        str += word + ","; 
    }
    
    std::cout << str << std::endl;
}