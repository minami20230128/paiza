#include <iostream>

int main()
{
    int N, c_1, c_2;
    int sum = 0;
    int ticket_num = 0;
    int sales = 0;
    std::cin >> N;
    std::cin >> c_1;
    std::cin >> c_2;

    for(int i = 0; i < N; i++)
    {
        int price;
        std::cin >> price;
        
        if(price >= c_2 || i == N - 1)
        {
            sales += ticket_num * price;
            ticket_num = 0;
        } 
        else if(price <= c_1)
        {
            sum += price;
            ticket_num++;
        }
    }

    std::cout << sales - sum << std::endl;

    return 0;
}