#include <iostream>
#include <numeric>
#include <vector>

class ChocoSplitter
{
public:
    ChocoSplitter()
    {
    }

    ~ChocoSplitter()
    {

    }

    void split(std::vector<std::vector<int>> chocolate)
    {
        this->choco_width = chocolate[0].size();
        for(auto&& choco_arr : chocolate)
        {
            if(!this->can_spilt(choco_arr))
            {
                std::cout << "No" << std::endl;

                return;
            }
        }
        
        this->print_result(this->choco_width);
    }

    bool can_spilt(std::vector<int> choco_arr)
    {
        for(int i = 1; i < choco_arr.size() - 1; i++)
        {
            int alice = std::accumulate(choco_arr.begin(), choco_arr.begin() + i, 0);
            int bob = std::accumulate(choco_arr.begin() + i, choco_arr.end(), 0);

            //std::cout << alice << std::endl;
            //std::cout << bob << std::endl;
            
            if(alice == bob)
            {
                this->split_points.push_back(i);
                return true;
            }
        }

        return false;
    }
    
    void print_result(int choco_width)
    {
        std::cout << "Yes" << std::endl;
        for(auto&& point: this->split_points)
        {
            this->print_arr_result(point, choco_width);
        }
    }

private:
    std::vector<int> split_points;
    int choco_width;

    void print_arr_result(int split_point, int choco_width)
    {
        for(int i = 0; i < split_point; i++)
        {
            std::cout << "A";
        }
        
        for(int j = 0; j < choco_width - split_point; j++)
        {
            std::cout << "B";
        }
        
        std::cout << std::endl;
    }
};

int main()
{
    int choco_height, choco_width;
    std::cin >> choco_height >> choco_width;

    std::vector<std::vector<int>> choco(choco_height, std::vector<int>(choco_width));

    auto splitter = ChocoSplitter();

    for(int i = 0; i < choco_height; i++)
    {
        for(int j = 0; j < choco_width; j++)
        {
            std::cin >> choco.at(i).at(j);
        }
    }
    
    splitter.split(choco);

    return 0;
}