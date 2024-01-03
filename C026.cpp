#include <iostream>

int main()
{
    int N, S, p;
    int biggest = 0;
    int num = 0;
    std::cin >> N >> S >> p;
    for(int i = 1;i <= N; i++)
    {
        int m , s;
        std::cin >> m >> s;

        if(S + p >= s && S - p <= s)
        {
            if (m > biggest)
            {
                biggest = m;
                num = i;
            }
            
        }
    }

    if(num == 0)
    {
        std::cout << "not found";
    }
    else
    {
        std::cout << num;
    }
    return 0;
}