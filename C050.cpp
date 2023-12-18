#include <iostream>
#include <string>

int main()
{
    int S, a, b;
    std::cin >> S >> a >> b;

    int price = S;
    int idx = 1;
    std::string buyer;
    
    while(price <= a && price <= b)
    {
        if(idx % 2 == 1)
        {
            if(price + 10 > a) break;
            price += 10;
            buyer = "A";
        }
        else
        {
            if(price + 1000 > b) break;
            price += 1000;
            buyer = "B";
        }
        idx++;
    }
    

    std::cout << buyer;
    std::cout << " ";
    std::cout << price;

    return 0;
}