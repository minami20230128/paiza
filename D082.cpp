#include <iostream>
#include <string>

int main()
{
    std::string a, b;
    std::cin >> a >> b;
    auto a_last = a.rbegin();
    auto b_first = b.begin();
    auto b_last = b.rbegin();
    if(*a_last != *b_first || *b_last == 'n')
    {
        std::cout << "NG" << std::endl;
    }
    else
    {
        std::cout << "OK" << std::endl;
    }
    return 0;
}