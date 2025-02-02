#include <iostream>
#include <vector>
#include <string>

class Stamp
{
private:
    std::vector<std::vector<std::string>> content;

public:
    Stamp(std::vector<std::vector<std::string>> content)
    {
        this->content = content;
    }

    ~Stamp()
    {

    }

    std::vector<std::string> get_line(int line_num)
    {
        return this->content.at(line_num);
    }
};

std::vector<std::vector<std::string>> construct_art_each_line(std::vector<int> plan_line, std::vector<Stamp> stamps, int stamp_y)
{
    std::vector<std::vector<std::string>> art;
    for(int i = 0; i < stamp_y; i++)
    {
        std::string art_line;
        for(auto&& p : plan_line)
        {
            art_line += stamps[p + 1].get_line(i);
        }
        art.push_back(art_line);
    }
    return art;
}

int main()
{
    int stamp_vertical, stamp_horizontal, stamp_num;
    std::vector<Stamp> stamps;

    for(int i = 0; i < stamp_num; i++)
    {
        std::vector<std::vector<std::string>> stamp_content;
        for(int j = 0; j < stamp_vertical; j++)
        {
            std::vector<std::string> stamp_line;
            for(int k = 0; k < stamp_horizontal; k++)
            {
                std::string ch;
                std::cin >> ch;
                stamp_line.push_back(ch);
            }
            stamp_content.push_back(stamp_line);
        }
        stamps.push_back(Stamp(stamp_content));
    }

    int plan_y, plan_x;
    std::vector<std::vector<std::string>> art;
    for(int i = 0; i < plan_y; i++)
    {
        std::vector<int>> plan;
        for(int j = 0; j < plan_x; j++)
        {
            int part_plan;
            std::cin >> part_plan;
            plan.push_back(part_plan);
        }
        art.push_back(construct_art_each_line(plan, stamps, stamp_y));
    }

    return 0;
}

//計画を1行取得
//計画に従い、
//各スタンプの1行目だけを並べたもの
//2行目だけを並べたもの
//3行目だけを並べたもの
//...
//を縦にくっつける

//計画の2行目を取得し、同じ処理をする