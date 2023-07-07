#include <iostream>
#include <string>

int main(){
    int a, b;
    std::string str;
    std::cin >> a;
    std::cin >> b;
    std::cin.ignore();
    
    getline(std::cin, str);
    
    int start = a - 1;
    int length = b - a + 1;
    
    auto dst = str.substr(start, length);
    
    std::cout << dst << std::endl;
    
    return 0;
}