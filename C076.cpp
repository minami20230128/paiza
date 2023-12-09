#include <iostream>

class TimeZone
{
    public:
    const int START_TIME = 9;
    const int END_TIME = 17;
    int wage;
    int time;

    TimeZone(int start, int end, int wage)
    {
        this->wage = wage;
        this->set_time(start, end);
    }

    void set_time(int start, int end)
    {
        if(start <= this->START_TIME && end <= this->END_TIME)
        {
            time = end - start;
        }
        else if(start <= this->START_TIME)
        {
            time = this->END_TIME - start;
        }
        else if(end <= this->END_TIME)
        {
            time = end - this->START_TIME;
        }
        else if(start <= this->START_TIME && end >= this->END_TIME)
        {
            time = END_TIME - START_TIME;
        }
        else
        {
            time = 0;
        }
    }

    int get_wage()
    {
        return this->time;
        //return this->wage * this->time;
    }
};

class Regular : public TimeZone
{
    public:
    const int START_TIME = 9;
    const int END_TIME = 17;
    Regular(int start, int end, int wage) : TimeZone(start, end, wage)
    {
        this->wage = wage;
        this->set_time(start, end);
    }
};

class Night : public TimeZone
{
    public:
    const int START_TIME = 17;
    const int END_TIME = 22;
    Night(int start, int end, int wage) : TimeZone(start, end, wage)
    {
        this->wage = wage;
        this->set_time(start, end);
    }
};

class MidNight1 : public TimeZone
{
    public:
    const int START_TIME = 22;
    const int END_TIME = 23;
    MidNight1(int start, int end, int wage) : TimeZone(start, end, wage)
    {
        this->wage = wage;
        this->set_time(start, end);
    }
};

class MidNight2 : public TimeZone
{
    public:
    const int START_TIME = 0;
    const int END_TIME = 9;
    MidNight2(int start, int end, int wage) : TimeZone(start, end, wage)
    {
        this->wage = wage;
        this->set_time(start, end);
    }
};

int main()
{
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    int n;
    std::cin >> n;
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        int daily_wage = 0;
        int start, end;
        std::cin >> start >> end;
        
        auto regular = Regular(X, start, end);
        daily_wage += regular.get_wage();
        auto night = Night(Y, start, end);
        daily_wage += night.get_wage();
        auto midnight1 = MidNight1(Z, start, end);
        daily_wage += midnight1.get_wage();
        auto midnight2 = MidNight2(Z, start, end);
        daily_wage += midnight2.get_wage();

        std::cout << daily_wage << std::endl;
        sum += daily_wage;
    }

    //std::cout << sum << std::endl;
    
    return 0;
}