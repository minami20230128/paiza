#include <iostream>
#include <string>

int main()
{
    std::string str;
    int N;
    
    std::cin >> str >> N;
    auto itr = str.begin();
    str.erase(itr + N - 1);

    std::cout << str << std::endl;

    return 0;
}