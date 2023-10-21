#include <iostream>

int main()
{
    int X, A, B;
    std::cin >> X >> A >> B;
    int num = X / A;
    std::cout << (B - A) * num << std::endl;
    
    return 0;
}