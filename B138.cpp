#include <iostream>
#include <vector>
#include <string>
#include <map>

int main()
{
    int Y, X; 
    std::cin >> Y >> X;
    std::vector<std::string> picture(Y);
    std::vector<std::pair<int, int>> points;
    int idx = 0;
    for(auto&& line : picture)
    {
        int prev = 0;
        std::cin >> line;
        //std::cout << line.find(".") << std::endl;

        if(idx == 0 || idx == Y - 1)
        {
            idx++;
            continue;
        }
        
        auto itr = line.begin() + 1;
        
        while(itr != line.end() - 1)
        {
            if(*itr == '.')
            {
                points.push_back(std::make_pair(idx, std::distance(line.begin(), itr)));
            }
            itr++;
        }
        idx++;
    }

    int cnt = 0;
    for(auto&& point : points)
    {
        if(picture.at(point.first - 1).at(point.second - 1) == '#'
            && picture.at(point.first - 1).at(point.second) == '#'
            && picture.at(point.first - 1).at(point.second + 1) == '#'
            && picture.at(point.first).at(point.second - 1) == '#'
            && picture.at(point.first).at(point.second + 1) == '#'
            && picture.at(point.first + 1).at(point.second - 1) == '#'
            && picture.at(point.first + 1).at(point.second) == '#'
            && picture.at(point.first + 1).at(point.second + 1) == '#'
            )
            {
                cnt++;
            }
    }

    std::cout << cnt << std::endl;

    return 0;
}