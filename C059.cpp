#include <iostream>
#include <vector>
#include <string>

int main()
{
    int N;
    std::cin >> N;
    std::vector<std::string> datas(4);
    for(int i = 0; i < N; i++)
    {
        std::string data;
        std::cin >> data;
        for(int j = 0; j < 4; j++)
        {
            datas[j] += data[j];
        }
    }
    
    auto itr = datas.begin();
    while(itr != datas.end())
    {
        //std::cout << *itr << std::endl;
        itr++;
    }

    for(auto data : datas)
    {
        //std::cout << data << std::endl;
        int num = 0;
        for(int i = 0; i < 4; i++)
        {
            //std::cout << data[i] << std::endl;
            if(data[i] == '1')
            {
                num++;
            }
        }
        
        //std::cout << num;
        if(num % 2 == 0)
        {
            std::cout << 0;
        }
        else
        {
            std::cout << 1;
        }
    }

    return 0;
}
