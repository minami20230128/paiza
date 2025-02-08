#include <iostream>
#include <vector>

class Comment
{
public:
    Comment(std::vector<int> goods) : is_buzz(false), buzz_time(0)
    {
        this->goods = goods;
    }

    ~Comment()
    {

    }


    void judge_buzz(int time, int buzz_time_limit, int buzz_threshold)
    {
        for(int i = buzz_time_limit; i <= time; i++)
        {
            if(this->is_buzz_by_time(i, buzz_time_limit, buzz_threshold))
            {
                break;
            }
        }
    }
    
    void print_result()
    {
        if(this->is_buzz)
        {
            std::cout << "yes ";
        }
        else
        {
            std::cout << "no ";
        }
        
        std::cout << this->buzz_time << std::endl;
    }

private:
    bool is_buzz;
    int buzz_time;
    std::vector<int> goods;

    bool is_buzz_by_time(int time, int buzz_time_limit, int buzz_threshold)
    {
        int good = 0;
        for(int t = time - buzz_time_limit; t < time; t++)
        {
            //std::cout << time - buzz_time_limit;
            good += this->goods[t];
            if(good >= buzz_threshold)
            {
                //std::cout << t + 1 << std::endl;
                this->is_buzz = true;
                this->buzz_time = t + 1;
                return true;
            }
        }
        
        return false;
    }
};

int main()
{
    int comment_num, time, buzz_time_limit, good_threshold;
    std::cin >> comment_num >> time >> buzz_time_limit >> good_threshold;
    std::vector<std::vector<int>> goods(comment_num, std::vector<int>(time));

    for(int i = 0; i < time; i++)
    {
        for(int j = 0; j < comment_num; j++)
        {
            std::cin >> goods.at(j).at(i);
            //std::cout << goods.at(j).at(i);
        }
    }
    
    for(int i = 0; i < comment_num; i++)
    {
        auto comment = Comment(goods[i]);
        comment.judge_buzz(time, buzz_time_limit, good_threshold);
        comment.print_result();
    }

    return 0;
}

//発言ごとにN時間までのGood増分合計>バズ基準以上であるかどうかを比較