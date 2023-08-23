#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
    std::string a, op, b, c;
    std::cin >> a;
    std::cin >> op;
    std::cin >> b;
    std::cin.ignore();
    std::cin.ignore();
    std::cin >> c;

    int one, two, answer;

    if(a == "x")
    {
        one = std::stoi(b);
        two = std::stoi(c);

        if(op == "+") answer = two - one;
        else answer = answer = two + one;
    }
    else if(b == "x")
    {
        one = std::stoi(a);
        two = std::stoi(c);

        if(op == "+") answer = two - one;
        else answer = answer = one - two;
    }
    else if(c == "x")
    {
        one = std::stoi(a);
        two = std::stoi(b);

        if(op == "+") answer = one + two;
        else answer = answer = one - two;
    }

   std::cout << answer << std::endl;

   return 0;
}