#include <iostream>
#include <vector>
#include <string>
#include <numeric>

class Cleanser
{
    std::vector<std::string> raw_datas;

public:
    Cleanser(std::vector<std::string> & raw_datas)
    {
        this->raw_datas = raw_datas;
    }

    std::vector<int> cleanse()
    {
        std::vector<int> cleaned_datas;
        for(auto&& data : this->raw_datas)
        {
            //std::cout << data << std::endl;
            if(std::all_of(data.cbegin(), data.cend(), isdigit))
            {
                int num = std::stoi(data);
                if(num >= 0 && num <= 100)
                {
                    cleaned_datas.push_back(num);
                }
            }
        }

        return cleaned_datas;
    }
};

int main()
{
    int student_num, question_num;
    std::cin >> student_num >> question_num;
    std::vector<std::vector<std::string>> datas(question_num, std::vector<std::string>(student_num));

    for(int i = 0; i < student_num; i++)
    {
        for(int j = 0; j < question_num; j++)
        {
            std::cin >> datas.at(j).at(i);
        }
    }

    for(auto&& data : datas)
    {
        auto cleanser = Cleanser(data);
        auto cleansed_data = cleanser.cleanse();
        int sum = std::accumulate(cleansed_data.begin(), cleansed_data.end(), 0);

        std::cout << sum / cleansed_data.size() << std::endl;
    }

    return 0;
}

//文字列として点数を入力
//クレンジングを行う
//数字に直し平均を計算