#include <iostream>
#include <vector>

int main()
{
    int N, M;
    std::cin >> N;
    std::cin >> M;
    std::vector<bool>IsCleaned(N, false);

    for(int i = 0; i < N; i++)
    {
        int L = M * i + 1;
        //std::cout << L << std::endl;
        if(L % N == 0)
        {
            IsCleaned[N - 1] = true;
        }
        else
        {
            IsCleaned[L % N - 1] = true;
        }
    }

    if(std::find(IsCleaned.begin(), IsCleaned.end(), false) == IsCleaned.end())
    {
        std::cout << "yes" << std::endl;
        return 0;
    }
    std::cout << "no" << std::endl;

    return 0;
}