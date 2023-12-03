#include <iostream>
#include <string>
#include <stdlib.h>

class HeightRange
{
    public:
    float lower_than;
    float higher_than;

    HeightRange(float lower_than, float higher_than)
    {
        this->lower_than = lower_than;
        this->higher_than = higher_than;
    }

    void set_higher(float height)
    {
        this->higher_than = this->higher_than > height ? this->higher_than : height;
    }

    void set_lower(float height)
    {
        this->lower_than = this->lower_than < height ? this->lower_than : height;
    }
};

int main()
{
    int N;
    std::cin >> N;
    auto height_range = HeightRange(200, 0);
    for(int i = 0; i < N; i++)
    {
        std::string relation;
        std::cin >> relation;
        float height;
        std::cin >> height;

        if(relation == "le")
        {
            height_range.set_lower(height);
        }
        else if(relation == "ge" && height_range.higher_than < height)
        {
            height_range.set_higher(height);
        }
    }

    printf("%.1lf", height_range.higher_than);
    std::cout << " ";
    printf("%.1lf", height_range.lower_than);
    
    return 0;
}