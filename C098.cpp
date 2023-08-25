#include <iostream>
#include <map>

int main()
{
    int N;
    std::cin >> N;
    std::map<int, int> having_balls;
    
    for(int i = 0; i < N; i++)
    {
        int ball;
        std::cin >> ball;
        having_balls[i] = ball;
    }

    int M;
    std::cin >> M;
    for(int i = 0; i < M; i++)
    {
        int player, target, ball_num;
        std::cin >> player;
        std::cin >> target;
        std::cin >> ball_num;

        int thrown_ball = ball_num >= having_balls[player - 1] ? having_balls[player - 1] : ball_num;
        having_balls[player - 1] -= thrown_ball; 
        having_balls[target - 1] += thrown_ball;
    }

    for(int i = 0; i < N; i++)
    {
        std::cout << having_balls[i] << std::endl;
    }

    return 0;
}