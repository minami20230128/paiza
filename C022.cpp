#include <iostream>

int main()
{
    int N;
    int start, end;
    int highest = 0;
    int lowest = 0;
    for(int i = 0; i < N; i++)
    {
        int s, e, h, l;
        std::cin >> s;
        std::cin >> e;
        std::cin >> h;
        std::cin >> l;

        if(i == 0) start = s;
        if(i == (N - 1)) end = e;
        highest = (h > highest) ? h : highest;
        lowest = (lowest > l) ? l : lowest;
    }

    std::cout << std::to_string(start) << " " << std::to_string(end) << " " << std::to_string(highest) << " " << std::to_string(lowest) << std::ednl;

    return 0;
}