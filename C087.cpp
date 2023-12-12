#include <iostream>
#include <string>

int main()
{
    std::string N;
    std::cin >> N;
    std::string str_n;
    
    bool is_kaibun = false;
    
    while(!is_kaibun)
    {
        auto ritr = N.rbegin();
        std::string result;
        while(ritr != N.rend())
        {
            result += std::string({*ritr});
            ritr++;
        }
    
        int result_num = std::stoi(result);
        int N_num = std::stoi(N);
    
        int n = result_num + N_num;
        
        //std::cout << n << std::endl;
        
        str_n = std::to_string(n);
        auto itr = str_n.begin();
        ritr = str_n.rbegin();
        
        while(itr != str_n.end())
        {
            if(*itr != *ritr)
            {
                N = str_n;
                break;
            }
            itr++;
            ritr++;
            
            if(itr == str_n.end()) is_kaibun = true;
        }
    }

    std::cout << str_n << std::endl;

    return 0;
}