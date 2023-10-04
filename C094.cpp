#include <iostream>

int main()
{
    int N;
    int sum = 0;
    std::cin >> N;
    for(int i = 0; i < N; i++)
    {
        int income;
        std::cin >> income;
        int j = income - 1500000 > 0 ? income - 1500000 : 0;
        int a = j * 0.4;
        //std::cout << a << std::endl;
        int g = income > 1500000 ? 1500000 : income;
        int k = g - 750000 > 0 ? g - 750000 : 0;
        int b = k * 0.2;
        //std::cout << b << std::endl;
        int h = income > 750000 ? 750000 : income;
        int l = h - 100000 > 0 ? h - 100000 : 0;
        int c = l * 0.1;
        //std::cout << c << std::endl;

        sum += a;
        sum += b;
        sum += c;
    }

    std::cout << sum << std::endl;
    return 0;
}