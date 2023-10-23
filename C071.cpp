#include <iostream>
#include <cmath>
#include <map>
#include <vector>
#include <math.h>

int main()
{
    int M, N;
    std::cin >> M >> N;
    std::vector<std::pair<int, int>> answers;
    for(int i = 1; i < M; i++)
    {
        for(int j = 1; j < N; j++)
        {
            auto hypotenuse = std::sqrt(pow(i , 2) + pow(j, 2));
            //std::cout << hypotenuse << std::endl;
            int i_hypotenuse = int(hypotenuse);
            double d_hypotenuse = double(i_hypotenuse);
            if(d_hypotenuse == hypotenuse && hypotenuse <i + j)
            {
                //std::cout << i_hypotenuse << std::endl;
                //std::cout << i << std::endl;
                //std::cout << j << std::endl;
                //std::cout << std::endl;
                answers.push_back(std::make_pair(i, j));
            }
        }
    }

    auto itr = answers.begin();
    while(itr != answers.end())
    {
        //std::cout << std::to_string(itr->first) << " " << std::to_string(itr->second) << std::endl;
        itr++;
    }
    
    std::cout << answers.size() << std::endl;
    

    return 0;
}