#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>

int main()
{
    std::string N;
    std::cin >> N;
    int answer = 0;
    int multipler = 4;
    auto itr = N.begin();
    while(itr != N.end())
    {
        answer += *(atoi(itr)) * pow(2, multipler);
        multipler--;
        itr++;
    }

    std::cout << answer << std::endl;
    
    return 0;
}