#include <iostream>
#include <string>
#include <map>
#include <vector>

int main()
{
    int N, M;
    std::cin >> N >> M;
    std::string s; 
    std::cin >> s;
    std::map<std::string, int> winning_finger_num = {
        {"G", 5},
        {"C", 0},
        {"P", 2}
    };

    std::vector<int> winning_combination;
    std::vector<std::vector<int>> combinations;

    int gu_num = 0;
    for(int i = 0; i < N; i++)
    {
        if(std::string({s[i]}) == "C")
        {
            gu_num++;
        }   
    }
    
    int without_gu = N - gu_num;
    //std::cout << without_gu;

    std::vector<int> win_by_combination;
    for(int i = 0; i < without_gu; i++)
    {
        for(int j = 0; j <= without_gu - i; j++)
        {
            if(2 * i + 5 * j == M)   
            {
                //std::cout << "choki: ";
                //std::cout << i << std::endl;
                //std::cout << "pa: ";
                //std::cout << j << std::endl;
                win_by_combination.push_back(i + j + gu_num);
            }
        }
    }

    int win = 0;
    for(auto&& combi : win_by_combination)
    {
        if(combi > win)
        {
            win = combi;
        }
    }

    std::cout << win << std::endl;

    return 0;
}