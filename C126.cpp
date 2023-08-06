#include <iostream>
#include <vector>

int main()
{
    int A, B, N;
    int sum = 0;
    std::cin >> A;
    std::cin >> B;
    std::cin >> N;
    std::vector<int> days(2 * N);

    for(int i = 0; i < days.size(); i++)
    {
        std::cin >> days[i];
        //std::cout << days[i] << std::endl;
    }

    for(int i = 1; i < days.size() - 2; i += 2)
    {
        auto num = days[i + 1] - days[i];
        auto commute = A * 2;
        auto stay = num * B;

        auto price = (commute > stay) ? stay : commute;
        //std::cout << price << std::endl;
        sum += price;
    }
    
    sum += 2 * A; 
    std::cout << sum << std::endl;

    return 0;
}