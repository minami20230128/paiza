#include <iostream>
#include <math.h>
#include <string>

int main()
{
    std::string pie = "3.141592653589793";
    //std::cout << pie;
    int N;
    std::cin >> N;
    
    std::cout << pie.substr(0, N + 2) << std::endl;
    
    return 0;
}
