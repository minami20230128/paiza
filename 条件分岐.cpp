#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int sum = 0;
    
    for(int i=0; i< n;i++)
    {
        int a, b;
        std::cin >> a;
        std::cin >> b;
        
        if(a == b)
        {
            sum += a * b;
        }
        else
        {
            sum += (a + b);
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}