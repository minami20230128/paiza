#include <iostream>
#include <vector>
#include <map>
#define NOT_FOUND -1

class Bingo
{
    std::vector<std::vector<int>> sheet;
    public:
    Bingo(int sheet_size)
    {
        this->sheet = std::vector<std::vector<int>>(sheet_size, std::vector<int>(sheet_size));
        for(int i = 0; i < sheet_size; i++)
        {
            for(int j = 0; j < sheet_size; j++)
            {
                std::cin >> this->sheet.at(i).at(j);
            }
        }
    }

    void hole(int lottery_time)
    {
        for(int i = 0; i < lottery_time; i++)
        {
            int num;
            std::cin >> num;

            auto pair = this->find_coordinates(num);
            //std::cout << pair.first << std::endl;
            //std::cout << pair.second << std::endl;
            
            if(pair.first != NOT_FOUND)
            {
                this->sheet.at(pair.first).at(pair.second) = 0;
            }
        }
    }

    int count()
    {
        //横のビンゴ数を数える
        int sheet_size = sheet.size();
        int bingo_num = 0;
        for(int i = 0; i < sheet_size; i++)
        {
            for(int j = 0; j < sheet_size; j++)
            {
                if(this->sheet.at(i).at(j) != 0) break;
                if(j == sheet_size - 1) bingo_num++;
            }
        }
        
        //縦のビンゴ数を数える
        for(int j = 0; j < sheet_size; j++)
        {
            for(int i = 0; i < sheet_size; i++)
            {
                if(this->sheet.at(i).at(j) != 0) break;
                if(i == sheet_size - 1) bingo_num++;
            }
        }
        
        //斜めのビンゴ数を数える
        for(int i = 0; i < sheet_size; i++)
        {
            if(this->sheet.at(i).at(i) != 0) break;
            if(i == sheet_size - 1) bingo_num++;
        }
        
        for(int i = 0; i < sheet_size; i++)
        {
            if(this->sheet.at(i).at((sheet_size - 1) - i) != 0) break;
            if(i == sheet_size - 1) bingo_num++;
        }

        return bingo_num;
    }

    private:
    std::pair<int, int> find_coordinates(int num)
    {
        int sheet_size = this->sheet.size();
        for(int i = 0; i < sheet_size; i++)
        {
            for(int j = 0; j < sheet_size; j++)
            {
                if(this->sheet.at(i).at(j) == num)
                {
                    return std::make_pair(i, j);
                }
            }
        }
        
        return std::make_pair(NOT_FOUND, NOT_FOUND);
    }
};



int main()
{
    int sheet_size, lottery_time;
    std::cin >> sheet_size >> lottery_time;
    auto bingo = Bingo(sheet_size);
    bingo.hole(lottery_time);
    int bingo_num = bingo.count();

    std::cout << bingo_num;

    return 0;
}