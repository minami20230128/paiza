#include <iostream>

int main(){
    int X, M;
    std::cin >> X >> M;
    
    int alignment;
    if(M % 30 != 0)
    {
        alignment = M / 30 + 1;
    }
    else
    {
        alignment = M / 30;
    }
    
    std::cout << alignment * X << std::endl;
   
    return 0;
}