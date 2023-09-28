#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N, M ,S;
    std::vector<int> songs;
    std::cin >> N >> M >> S;
    int total_time = M * 60 + S;
    //std::cout << total_time << std::endl;
    for(int i = 0; i < N; i++)
    {
        int m, s;
        std::cin >> m >> s;
        int length = m * 60 + s;
        songs.push_back(length);
    }

    std::sort(songs.begin(), songs.end());

    int sum = 0;
    int idx = 0;
    for(auto&& song : songs)
    {
        sum += song;
        //std::cout << song << std::endl;
        idx++;
        if(sum > total_time)
        {
            std::cout << idx - 1 << std::endl;
            break;
        }
        
        if(idx == songs.size())
        {
            std::cout << idx << std::endl;
        }
    }
    return 0;
}