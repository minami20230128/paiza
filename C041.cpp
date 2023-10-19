#include <iostream>
#include <vector>
#include <algorithm>

class Nation
{
    public:
        int gold;
        int silver;
        int copper;

    Nation(int gold, int silver, int copper)
    {
        this->gold = gold;
        this->silver = silver;
        this->copper = copper;
    }
};

bool compare_medals(Nation a, Nation b)
{
    if(a.gold != b.gold)
    {
        return a.gold > b.gold;
    }

    if(a.silver != b.silver)
    {
        return a.silver > b.silver;
    }

    return a.copper > b.copper;
}

int main()
{
    std::vector<Nation> nations;
    int N;
    std::cin >> N;
    for(int i = 0; i < N; i++)
    {
        int gold, silver, copper;
        std::cin >> gold >> silver >> copper;
        auto nation = Nation(gold, silver, copper);
        nations.push_back(nation);
    }

    std::sort(nations.begin(), nations.end(), compare_medals);

    auto itr = nations.begin();

    while(itr != nations.end())
    {
        std::cout << std::to_string(itr->gold) << " " << std::to_string(itr->silver) << " " << std::to_string(itr->copper) << std::endl;
        itr++;
    }

    return 0;
}