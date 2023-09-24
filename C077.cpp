#include <iostream>

int main()
{
    int k, n;
    std::cin >> k >> n;
    int per_q = 100 / n;
    for(int i = 0; i < k; i++)
    {
        int day, question;
        std::cin >> day >> question;
        int point = per_q * question;
        if(day < 10 && day > 0)
        {
            point *= 0.8;
        }
        else if(day >= 10)
        {
            point = 0;
        }

        if(point >= 80)
        {
            std::cout << "A" << std::endl;
        }
        else if(point < 80 && point >= 70)
        {
            std::cout << "B" << std::endl;
        }
        else if(point < 70 && point >= 60)
        {
            std::cout << "C" << std::endl;
        }
        else
        {
            std::cout << "D" << std::endl;
        }
    }
    return 0;
}