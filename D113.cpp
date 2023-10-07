#include <iostream>
#include <stdlib.h>

int main()
{
    std::string time;
    std::cin >> time;
    int point = time.find(":");
    int hour = atoi(time.substr(0, point).c_str());
    //std::cout << time.substr(0, point) << std::endl;
    int min = atoi(time.substr(point + 1).c_str()); 

    int h = hour - 8 < 0 ? hour - 8 + 24 : hour - 8;

    std::cout << std::to_string(h) << ":" << std::to_string(min) << std::endl;

    return 0;
}