#include <iostream>
#include <string>

int get_hour(std::string time)
{
    std::string hour;
    for(int i = 0; i < 2; i++)
    {
        hour += time[i];
    }
    
    return std::stoi(hour);
}

int get_day(std::string date)
{
    std::string day;
    for(int i = 3; i < 5; i++)
    {
        day += date[i];
    }
    
    return std::stoi(day);
}

std::string get_month(std::string date)
{
    std::string month;
    for(int i = 0; i < 2; i++)
    {
        month += date[i];
    }
    
    return month;
}

std::string get_minutes(std::string time)
{
    std::string minute;
    for(int i = 3; i < 5; i++)
    {
        minute += time[i];
    }
    
    return minute;
}

int main()
{
    std::string date, time;
    std::cin >> date >> time;

    auto hour = get_hour(time);
    auto day = get_day(date);
    day += hour / 24;
    hour = hour % 24;
    
    std::string hour_s = hour / 10 == 0 ? "0" + std::to_string(hour) : std::to_string(hour);
    
    std::cout << get_month(date) << "/"<< std::to_string(day) << " " << hour_s << ":" << get_minutes(time);
    
    return 0;
}