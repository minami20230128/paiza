#include <iostream>
#include <vector>

std::vector<std::vector<int>> shuffle(std::vector<std::vector<int>> arr, int arr_num, int M, int N)
{
    for(int i = 0; i < arr_num / 2 + 1; i++)
    {
        auto itr_one = arr.begin() + i;
        auto itr_two = arr.end() - i - 1;

        std::iter_swap(itr_one, itr_two);
    }
    
    for(int i = 0; i < arr_num; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(i * M + (j + 1) > N) break;
            //std::cout << arr.at(i).at(j) << std::endl;
        }
    }
    
    return arr;
}

int main()
{
    int N, M, K;
    std::cin >> N >> M >> K;
    int arr_num =  N % M == 0 ? N / M : N / M + 1;
    std::vector<std::vector<int>> cards(arr_num, std::vector<int>(M + 1));
    
    for(int i = 0; i < arr_num; i++)
    {
        for(int j = 0; j < M; j++)
        {
            //std::cout << i << std::endl;
            //std::cout << j << std::endl;
            if(i * M + (j + 1) > N) break;
            cards.at(i).at(j) = i * M + (j + 1);
            if(k == K - 1)
            {
                //std::cout << i << std::endl;
                //std::cout << cards.at(i).at(j) << std::endl;
            }
            
        }
    }

    for(int k = 0; k < K; k++)
    {
        std::vector<int> card
        for(int i = 0; i < arr_num; i++)
        {
            for(int j = 0; j < M; j++)
            {
                cards.at(i).at(j) = cards
                
            }
        }
        
        cards = shuffle(cards, arr_num, M, N);
    }

    for(int i = 0; i < arr_num; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(i * M + (j + 1) > N) break;
            //std::cout << cards.at(i).at(j) << std::endl;
        }
    }


    return 0;
}