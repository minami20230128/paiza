#include <iostream>

int main()
{
    int hour, min;
    std::cin >> hour >> min;
    int curhour, curmin;
    std::cin >> curhour >> curmin;
    if(curhour > hour)
    {
        std::cout << "No";
    }
    else if(curhour == hour && curmin > min)
    {
        std::cout << "No";
    }
    else
    {
        std::cout << "Yes";
    }

    return 0;

}