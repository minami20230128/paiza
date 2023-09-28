#include <iostream>
#include <vector>
#include <string>

int main()
{
    int N;
    std::cin >> N;
    int stop = 0;
    int diet = 0;
    int prev_weight = 0;
    std::vector<int> diet_records(1, 0);
    std::vector<int> stop_records(1, 0);
    bool is_dieting = false;
    for(int i = 0; i < N; i++)
    {
        int weight;
        std::cin >> weight;
        if(weight > prev_weight)
        {
            if(i != 0) stop++;
            if(is_dieting)
            {
                is_dieting = false;
                diet_records.push_back(diet);
                diet = 0;
            }
        }
        else if(weight < prev_weight)
        {
            if(!is_dieting)
            {
                is_dieting = true;
                stop_records.push_back(stop);
                stop = 0;
            }
            diet++;
        }
        
        if(i == N - 1)
        {
            diet_records.push_back(diet);
            stop_records.push_back(stop);
        }
        
        prev_weight = weight;
    }
    
    std::sort(diet_records.begin(), diet_records.end());
    std::sort(stop_records.begin(), stop_records.end());

    std::cout << std::to_string(diet_records.back()) << " " << std::to_string(stop_records.back()) << std::endl;

    return 0;
}