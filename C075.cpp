#include <iostream>
#include <string>

int main()
{
    int N, M;
    int point = 0;
    std::cin >> N;
    std::cin >> M;

    for(int i = 0; i < M; i++)
    {
        int fee;
        std::cin >> fee;
        if(point >= fee)
        {
            point -= fee;
        }
        else
        {
            N -= fee;
            point += fee * 0.1;
        }

        std::cout << std::to_string(N) << " " << std::to_string(point) << std::endl;
    }

    return 0;
}