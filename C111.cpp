#include <string>
#include <vector>
#include <iostream>
#include <bitset>

class Block
{
public:
    std::string str;
    int str_len;

    uint64_t validate_str()
    {
        if(this->str.size() != this->str_len)
        {
            while(1)
            {
                this->str += "0";

                if(str.size() == this->str_len)
                {
                    break;
                }
            }
        }
        
        //std::cout << this->str << std::endl;
        return std::stoi(this->str);
    }

    Block(std::string str, int str_len)
    {
        this->str = str;
        this->str_len = str_len;
    }
};

int main()
{
    int N, M;
    std::string s;
    std::cin >> N >> M >> s;
    std::vector<std::string> strs;

    while(1)
    {
        //std::cout << s << std::endl;
        if(s.size() < M)
        {
            strs.push_back(s);
            break;
        }
        
        strs.push_back(s.substr(0, M));
        s = s.substr(M);
    }

    int result = 0;

    for(int i = 0; i < strs.size(); i++)
    {
        //std::cout << strs[i] << std::endl;
        auto block = new Block(strs[i], M);
        result ^= block->validate_str();
    }
    
    std::string result_str = std::to_string(result);
    while(result_str.size() < M)
    {
        result_str = "0" + result_str;
    }
    std::cout << result_str << std::endl;

    return 0;
}