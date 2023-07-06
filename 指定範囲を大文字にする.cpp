#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

int main(){
    int a, b;
    std::cin >> a;
    std::cin >> b;
    std::cin.ignore(); 
    
    std::string str ="";
    std::getline(std::cin, str);
    
    std::transform(str.begin() + a - 1, str.begin() + b, str.begin() + a - 1, ::toupper);
    std::cout << str << std::endl;
    
    return 0;
}