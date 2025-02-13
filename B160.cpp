#include <iostream>
#include <string>
#include <vector>

class Maze
{
    std::vector<std::vector<std::string>> maze;
    int height;
    int width;

public:
    Maze(std::vector<std::vector<std::string>> maze, int height, int width)
    {
        this->maze = maze;
        this->height = height;
        this->width = width;
    }

    ~Maze()
    {

    }

    int get_left_len(int x, int y)
    {
        int len = 0;
        //std::cout << "x:";
        //std::cout << x << std::endl;
        //std::cout << "y:";
        //std::cout << y << std::endl;
        
        for(int i = y; i > 0; i--)
        {
            std::cout << this->maze.at(x - 1).at(i - 1) << std::endl;
            
            if(this->maze.at(x - 1).at(i) == ".")
            {
                len++;
                continue;
            }
            return len;
        }
        return len;
    }
    
    int get_right_len(int x, int y)
    {
        int len = 0;
        for(int i = y; i < this->width; i++)
        {
            std::cout << this->maze.at(x - 1).at(i - 1) << std::endl;
            
            if(this->maze.at(x - 1).at(i - 1) == ".")
            {
                len++;
                continue;
            }
            return len;
        }
        return len;
    }
    
    bool can_go_straight(int x, int y)
    {
        std::cout << this->maze.at(x).at(y - 1) << std::endl;
        if(this->maze.at(x).at(y - 1) == ".") return true;
        
        return false;
    }
};

int main()
{
    int height, width;
    std::cin >> height >> width;
    int x, y;
    std::cin >> x >> y;
    std::vector<std::vector<std::string>> route_info(height, std::vector<std::string>(width));

    for(int i = 0; i < height; i++)
    {
        std::string str;
        std::cin >> str;
        for(int j = 0; j < width; j++)
        {
            route_info.at(i).at(j) = std::string({str[j]});
            //std::cout << route_info.at(i).at(j);
        }
        
        //std::cout << std::endl;
    }
    
    //std::cout << route_info.size() << std::endl;
    //std::cout << route_info[0].size() << std::endl;
    
    Maze maze = Maze(route_info, height, width);

    while(1)
    {
        int left = maze.get_left_len(x, y);
        std::cout << "left: ";
        std::cout << left << std::endl;
        if(left != 0)
        {
            y -= left;            
            std::cout << "x:";
            std::cout << x << std::endl;
            std::cout << "y:";
            std::cout << y << std::endl;
            continue;
        }
        
        int right = maze.get_right_len(x, y);
        std::cout << "right: ";
        std::cout << right << std::endl;
        if(right != 0)
        {
            y += right;
            std::cout << "x:";
            std::cout << x << std::endl;
            std::cout << "y:";
            std::cout << y << std::endl;
            continue;
        }
        
        if(maze.can_go_straight(x, y))
        {
            x += 1;
            std::cout << "x:";
            std::cout << x << std::endl;
            std::cout << "y:";
            std::cout << y << std::endl;
            continue;
        }
        
        break;
    }
    
    std::cout << x;
    std::cout << " ";
    std::cout << y << std::endl;

    return 0;
}