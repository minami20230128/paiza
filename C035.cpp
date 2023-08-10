#include <iostream>

int main()
{
    int N;
    int sum = 0;
    std::cin >> N;
    for(int i = 0; i < N; i++)
    {
        std::string ls;
        int e, m, s, j, g;
        std::cin >> ls;
        std::cin >> e;
        std::cin >> m;
        std::cin >> s;
        std::cin >> j;
        std::cin >> g;

        if(ls == "l")
        {
            if(j + g => 160 && e + m + s + j + g => 350)
            {
                sum ++;
            }
        }
        if(ls == "s")
        {
            if(m + s => 160 && e + m + s + j + g => 350)
            {
                sum ++;
            }
        }
    }

    std::cout << sum << std::emdl;

    return 0;
}