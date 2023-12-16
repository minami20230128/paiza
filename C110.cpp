#include <iostream>
#include <vector>

class Schedule
{
    public:
    int start;
    int end;
    int term;

    Schedule(){}

    void set_start(int start)
    {
        this->start = start;
    }

    void set_end(int end)
    {
        this->end = end;
        this->term = end - start + 1;
    }
};


int main()
{
    int N;
    std::cin >> N;
    std::vector<Schedule> schedules;
    bool is_continuous = false;
    int prev_date = 1;
    auto schedule = Schedule();
    
    for(int i = 0; i < N; i++)
    {
        int date;
        std::cin >> date;
        
        if(i == 0)
        {
            schedule = Schedule();
            schedule.set_start(date);
        }
     
        if(date - prev_date > 1)
        {
            //std::cout << date << std::endl;
            schedule.set_end(prev_date);
            schedules.push_back(schedule);
            is_continuous = false;
            schedule = Schedule();
            schedule.set_start(date);
        }
        
        //std::cout << date << std::endl;
        if(i == N - 1) 
        {
            schedule.set_end(date);
            schedules.push_back(schedule);
        }

        prev_date = date;
        //std::cout << prev_date << std::endl;
    }

    int longest = 0;
    Schedule longest_sche;
    auto itr = schedules.begin();
    while(itr != schedules.end())
    {
        //std::cout << itr->start << std::endl;
        //std::cout << itr->end << std::endl;
        //std::cout << itr->term << std::endl;
        if(itr->term > longest)
        {
            longest = itr->term;
            longest_sche = *itr;
        }
        itr++;
    }
    
    std::cout << longest_sche.start;
    std::cout << " ";
    std::cout << longest_sche.end;

    return 0;
}