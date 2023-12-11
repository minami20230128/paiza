#include <iostream>

int main()
{
    int time;
    std::cin >> time;
    time = time >= 24 ? time - 24 : time;
    std::cout << time << std::endl;
    return 0;
}