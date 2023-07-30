#include <iostream>
#include <vector>

int main()
{
    try
    {
        int N, M;
        std::cin >> N;
        std::cin >> M;
        std::vector<bool>IsCleaned(N, false);

        for(int i = 0; i < N; i++)
        {
            int L = M * i + 1;
            //std::cout << L << std::endl;
            IsCleaned[L % N] = true;
        }

        if(std::find(IsCleaned.begin(), IsCleaned.end(), false) == IsCleaned.end())
        {
            std::cout << "yes" << std::endl;
        }
        else
        {
            std::cout << "no" << std::endl;
        }

        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}