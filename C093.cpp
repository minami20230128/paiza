#include <iostream>

int calc_point(int point)
{
    if(point == 100)
    {
        return 1;
    }
    else 
    {
        int tmp = point / 10 + point % 10;
        return tmp % 10;
    }
}

int main()
{
    int bob, alice;
    std::cin >> bob >> alice;

    auto bob_point = calc_point(bob);
    auto alice_point = calc_point(alice);
    
    if(bob_point == alice_point)
    {
        std::cout << "Draw" << std::endl;
    }
    else if(bob_point > alice_point)
    {
        std::cout << "Bob" << std::endl;
    }
    else
    {
        std::cout << "Alice" << std::endl;
    }

    return 0;
}