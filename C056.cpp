#include <iostream>

int main()
{
    int N, M;
    std::cin >> N;
    std::cin >> M;
    int student_num = 1;
    for(int i =0; i < N; i++)
    {
        int point, absence;
        std::cin >> point;
        std::cin >> absence;
        auto grade = point - absence * 5 < 0 ? 0 : point - absence * 5;
        if(grade >= M)
        {
            std::cout << student_num << std::endl;
        }
        student_num++;
    }
    return 0;
}

