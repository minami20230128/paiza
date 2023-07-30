#include <iostream>
#include <vector>

int main()
{
    int N, K, M;
    int count = 0;
    std::cin >> N;
    std::cin >> K;
    std::cin >> M;

   for(int i = 0; i < N; i++)
   {
        int point;
        std::cin >> point;
        if(point >= K) count++;
   }

    int answer = ((count - M) > 0) ? (count - M) : 0;
    std::cout << answer << std::endl;

    return 0;
}l