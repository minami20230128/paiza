#include <iostream>
#define PAIZA_WEIGHT 60
#define PAIZA_AGE 15

int main()
{
    int age, weight;
    std::cin >> age >> weight;

    if(age <= PAIZA_AGE && weight >= PAIZA_WEIGHT)
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
    }

    return 0;
}