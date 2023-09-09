#include <iostream>
#include <string>

int main()
{
    int H, W, X;
    std::cin >> H >> W >> X;
    std::string all;
    for(int i = 0; i < H; i++)
    {
        std::string str;
        std::cin >> str;
        all += str;
    }

    auto itr = all.begin();
    int cnt = 0;
    std::string str;
    while(itr != all.end())
    {
        str += {*itr};
        if((cnt + 1) % X == 0 || itr == all.end() - 1)
        {
            std::cout << str << std::endl;
            str = "";
        }
        cnt++;
        itr++;
    }

    return 0;
}