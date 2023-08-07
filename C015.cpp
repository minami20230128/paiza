#include <iostream>

int main()
{
    int N;
    int sum = 0;
    std::cin >> N;

    for(int i =0; i< N;i++)
    {
        int date, price;
        float rate = 0.01;
        std::cin >> date;
        std::cin >> price;
        
        if (date == 5 || date == 15 || date == 25)
        {
            rate = 0.05;
        }
        else if(date == 3 || date == 13 || date == 23 || date == 30 || date == 31)
        {
            rate = 0.03;
        }

        //std::cout << price * rate << std::endl;
        sum += price * rate;
    }

    std::cout << sum << std::endl;

    return 0;
}   