#include <iostream>
#include <string>

int main()
{
    int N;
    std::cin >> N;
    int cnt = 0;

    for(int i = 0; i < N; i++)
    {
        std::string alice, bob;
        std::cin >> alice >> bob;

        bool is_winning = false;

        is_winning = (alice == "G" && bob == "C") || (alice == "C" && bob == "P") || (alice == "P" && bob == "G");

        if(is_winning)
        {
            cnt++;
        }
    }

    std::cout << cnt << std::endl;

    return 0;
}