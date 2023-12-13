#include <iostream>
#include <string>

int main()
{
    int N;
    std::cin >> N;
    std::string str = "";
    std::string astarisk = "*";
    for(int i =0; i < N; i ++)
    {
        str += astarisk;
    }

    std::cout << str << std::endl;
    return 0;
}