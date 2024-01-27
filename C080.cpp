#include <iostream>

int main()
{
    int button_num, game_over;
    int push;
    bool is_game_over = false;
    std::cin >> button_num >> game_over >> push;

    int right = 1;
    int correct_num = 0;
    for(int i = 0; i < push; i++)
    {
        int input;
        std::cin >> input;
       // std::cout << right;
        if(input != right)
        {
            game_over -= 1;
            if(game_over == 0)
            {
                is_game_over = true;
                break;
            }
        }
       
       else
       {
           correct_num += 1;
       }
        

        right++;
        if(right > button_num)
        {
            right = 1;
        }
    }

    if(is_game_over)
    {
        std::cout << -1;
    }
    else
    {
        std::cout << correct_num * 1000;
    }

    return 0;
}