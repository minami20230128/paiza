#include <iostream>

int main()
{
    int N, L;
    std::cin >> N >> L;

    for(int i = 0; i < N; i++)
    {
        int enemy;
        std::cin >> enemy;
        bool is_winning = L > enemy;
        bool is_tie = L == enemy;

        if(is_tie)
        {
            continue;
        }

        if(is_winning)
        {
            L += enemy / 2;
        }
        else
        {
            L /= 2;
        }
    }

    std::cout << L;

    return 0;
}